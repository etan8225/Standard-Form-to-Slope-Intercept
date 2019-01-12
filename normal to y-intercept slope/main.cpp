// Make a program that takes x + y = b and tell the y - intercept and slope to the user. (dont know how to show decimal yet, will find out).
// Have a program sort out the equation value and make it into y = x + b form and spit out those #s.
#include <iostream>

void problemSolver(int x, int b, int y);

int main()
{
    int x;
    int b;
    int y;
    std::cout << "Enter the y value." << std::endl;
        std::cin >> y;
    
    std::cout << "Please enter the x value." << std::endl;
        std::cin >> x;
    
    std::cout << "Lastly, enter the b value." << std::endl;
        std::cin >> b;
    problemSolver(x, y, b);
    return 0;
}
