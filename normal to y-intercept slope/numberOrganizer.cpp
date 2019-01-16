#include <iostream>

void numberOrganizer(long double x, long double y, long double b)
{
    std::cout << "Slope-Intercept Form: " <<  "y = " << -x / y << "x + " << b / y << std::endl;
    std::cout << "Slope of the line:        " << -x / y << std::endl;
    std::cout << "The Y-Intercept is:        " << b / y << std::endl;
 }
