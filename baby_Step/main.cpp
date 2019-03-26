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
    int width(5); // uniform initilization BEST PRACTICE TO DO :) 

    width = 17;
    std::cout 
    << width
    << " is the width of the Rectangle";
    
}

int main()
{
    // sayHello();
    variableAssign();
}


/*
int a = 5, b = 6; // copy initialization
int c( 7 ), d( 8 ); // direct initialization
int e{ 9 }, f{ 10 }; // uniform initialization (preferred)

*/