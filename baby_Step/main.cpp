#include <iostream> //Proc directive that indicate that we want to use this preprocessor
using namespace std;
int sayHello() //Defining function
{
    std::cout                                   //console output
        << "this is a string Chdoulaaaaaaaaa\n" //<< allow us to send letters or numbers to be outputed
        << "this is another stirng Chdoula\n"
        << "and a final string ya chdoulaaaaaaaaa\n";
}

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


int variableAssign() // Variable
{
    int width(5); // uniform initilization BEST PRACTICE TO DO :)
    std::cout << "Enter a age: ";
    std::cin >> width;
    std::cout << "you were born in " << 2019 - width << '\n';
}

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

int main()
{
    
    // sayHello();
    // variableAssign();
    // calcul();
    compare();
}

/*
int a = 5, b = 6; // copy initialization
int c( 7 ), d( 8 ); // direct initialization
int e{ 9 }, f{ 10 }; // uniform initialization (preferred)

*/