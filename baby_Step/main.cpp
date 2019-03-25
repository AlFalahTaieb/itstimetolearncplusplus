#include <iostream> //Proc directive that indicate that we want to use this preprocessor

int sayHello() //Defining function
{
    std::cout                                   //console output
        << "this is a string Chdoulaaaaaaaaa\n" //<< allow us to send letters or numbers to be outputed
        << "this is another stirng Chdoula\n"
        << "and a final string ya chdoulaaaaaaaaa\n";
}

int variableAssign()
{
    int width(5);

    width = 7;
    std::cout << width;
}

int main()
{
    // sayHello();
    variableAssign();
}
