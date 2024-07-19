// C++ program to demonstrate the macro definition
#include<iostream>
using namespace std ;

// Syntax: #define MACRO_NAME macro_definition 
// Define a macro to calculate the square of a number
#define SQUARE(x) (x * x)

int main ()
{
    int a = 8;
    int result = SQUARE(a);
    cout << "The result is: " << result << endl ; 
    return 0;

}