#include <iostream>

using namespace std;

int age() // Variable
{
    int width(5); // uniform initilization BEST PRACTICE TO DO :)
    std::cout << "Enter a age: ";
    std::cin >> width;
    std::cout << "you were born in " << 2019 - width << '\n';
}