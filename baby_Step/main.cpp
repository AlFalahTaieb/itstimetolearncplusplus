#include <iostream> //Proc directive that indicate that we want to use this preprocessor
using namespace std;

#include "functions/calcul.h"
#include "functions/compare.h"
#include "functions/age.h"
#include "functions/artihmatic.h"
#include "functions/input.h"


void calcul();
int sayHello();
void compare();
int multiply();
int add();
int age();
int getInteger();
int main()
{

    // sayHello();
    // variableAssign();
    // calcul();
    // compare();
    // age();
    // add(5,2,67);
    int x = getInteger();
    int y = getInteger();
    int w = getInteger();
    // int z = multiply(x,y)
    // cout << multiply(x,y);
    //cout << add(x, y, w);

}

/*
int a = 5, b = 6; // copy initialization
int c( 7 ), d( 8 ); // direct initialization
int e{ 9 }, f{ 10 }; // uniform initialization (preferred)

*/