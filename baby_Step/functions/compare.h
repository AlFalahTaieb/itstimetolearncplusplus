#include <iostream>
using namespace std;

void compare()
{
    std::cout << "Enter two numbers to compare :\n";
    int x;
    int y;
    std::cin >> x >> y;

    if (x > y)
    {
        std::cout << x << " > " << y << '\n';
    }
    else
    {
        std::cout << y << " > " << x << '\n';
    }
}