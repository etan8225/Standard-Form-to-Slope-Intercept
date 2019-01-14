#include <iostream>
#include "headers.h"


int main()
{
    int y = question1();          // Asks the "y" question.
    int x = question2();          // Asks the "x" question.
    int b = question3();          // Asks the "b" question.
    problemSolver(x, y, b);       // Turns it into Slope-Intercept form.
    return 0;
}
