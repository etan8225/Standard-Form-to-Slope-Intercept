#include <iostream>

void problemSolver(int x, int y, int b)
{
    x = -x;
    std::cout << y << "y = " << x << "x + " << b << std::endl;
    std::cout << "The slope is: " << x << std::endl;
    std::cout << "The y-intercept is: " << b << std::endl;
}
