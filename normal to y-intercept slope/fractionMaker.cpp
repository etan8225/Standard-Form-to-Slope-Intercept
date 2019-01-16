#include <stdio.h>
#include <iostream>

void foo(double input)
{
    double integral = std::floor(input);
    double frac = input - integral;
    
    const long precision = 1000000000; // This is the accuracy.
    
    long gcd_ = gcd(round(frac * precision), precision);
    
    long denominator = precision / gcd_;
    long numerator = round(frac * precision) / gcd_;
    
    std::cout << integral << " + ";
    std::cout << numerator << " / " << denominator << std::endl;
}

long gcd(long a, long b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    
    if (a < b)
        return gcd(a, b % a);
    else
        return gcd(b, a % b);
}
