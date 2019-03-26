#include <iostream> //Proc directive that indicate that we want to use this preprocessor
using namespace std;
int sayHello() //Defining function
{
    std::cout                                   //console output
        << "this is a string Chdoulaaaaaaaaa\n" //<< allow us to send letters or numbers to be outputed
        << "this is another stirng Chdoula\n"
        << "and a final string ya chdoulaaaaaaaaa\n";
}

int variableAssign()
{
    int width(5); // uniform initilization BEST PRACTICE TO DO :)
    std::cout << "Enter a age: ";
    std::cin >> width;
    std::cout << "you were born in " << 2019 - width << '\n';
}

int calcul()
{
    int x;
    int y;
    char i;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> i;
    std::cout << "Enter two numbers ";
    std::cin >> x >> y;

    switch (i)
    {
        case '+': std::cout << x+y << '\n';
         break;
        case '-': std::cout << x-y << '\n';
         break;
        case '*': std::cout << x*y << '\n';
         break;
        case '/': std::cout << x/y << '\n';
            break;
    }

}

int main()
{
    // sayHello();
    // variableAssign();
    calcul();
}

/*
int a = 5, b = 6; // copy initialization
int c( 7 ), d( 8 ); // direct initialization
int e{ 9 }, f{ 10 }; // uniform initialization (preferred)

*/