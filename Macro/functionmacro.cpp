// C++ program to illustrate the function like macros
#include<iostream>
using namespace std;

// Take arguments and perform text substitution based on those arguments.
// Define a macro to print a value
#define PRINT(a) cout << " The value is " << a << endl 

int main()
{
    int value =  10;

    // Define a macro to print a value
    PRINT(value);
    return 0;
}
