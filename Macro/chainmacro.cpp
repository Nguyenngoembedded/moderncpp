// C++ program to illustrate the chain macros 
#include<iostream>
using namespace std;

#define DOUBLE(x) ((x)*2)
#define SQUARE(x) ((x)*(x))
#define SQUARE_AND_DOUBLE(x) DOUBLE(SQUARE(x))

int main()
{
    int num = 5;
    cout << SQUARE_AND_DOUBLE(num) << endl;
    return 0;
}