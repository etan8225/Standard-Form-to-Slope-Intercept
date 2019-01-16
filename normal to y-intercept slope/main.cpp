#include <iostream>
#include "headers.h"


int main()
{
    long double y{question1()};             // Asks the "y" question.
    long double x{question2()};             // Asks the "x" question.
    long double b{question3()};             // Asks the "b" question.
    numberOrganizer(x, y, b);               // Turns it into Slope-Intercept form.
    return 0;
}
