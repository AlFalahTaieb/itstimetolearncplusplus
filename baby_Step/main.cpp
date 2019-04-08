#include <iostream> //Proc directive that indicate that we want to use this preprocessor
using namespace std;


#include "functions/calcul.h"
#include "functions/compare.h"
#include "functions/age.h"


void calcul();
int sayHello();
void compare();
int add(int x, int y, int z)
{
    return x + y + z;
}

int multiply(int x, int y)
{
    return x * y;
}

int age();




int main()
{

    // sayHello();
    // variableAssign();
    // calcul();
    // compare();
    age();
}

/*
int a = 5, b = 6; // copy initialization
int c( 7 ), d( 8 ); // direct initialization
int e{ 9 }, f{ 10 }; // uniform initialization (preferred)

*/