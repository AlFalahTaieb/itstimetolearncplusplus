#include <iostream> 

using namespace std;

void calcul() // function declaration
{

    cout << "Enter an operator (+ ,  - ,  * ,  / ): ";
    char i;
    cin >> i;
    std::cout << "Enter two numbers ";
    int x;
    int y;
    std::cin >> x >> y;

    switch (i)
    {
    case '+':
        std::cout << x << " + " << y << " = " << x + y << '\n';
        break;
    case '-':
        std::cout << x << " - " << y << " = " << x - y << '\n';
        break;
    case '*':
        std::cout << x << " * " << y << " = " << x * y << '\n';
        break;
    case '/':
        std::cout << x << " / " << y << " = " << x / y << '\n';
        break;
    }
}
