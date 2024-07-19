// C++ program to illustrate the predefined macros 
#include<iostream>
using namespace std;

int main()
{
    // Display the current line number
    cout << " Current line is: " << __LINE__ << endl;
    // Display name file 
    cout << " Name of file is: " << __FILE__ << endl;
    // Display date and time 
    cout << " The Date: " << __DATE__ << " \n " << "Time: " << __TIME__ << endl;

    return 0;


}