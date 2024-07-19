#include <iostream>
using namespace std;

// Include the header file for the Counted class
#include "Counted.hpp"

// Define and initialize the static member variable 'count' of the Counted class
int Counted::count = 0;

int main() {
    // Create the first object of Counted class
    Counted a;
    // Output the current count of Counted objects
    cout << "Count: " << Counted::count << endl;

    // Create the second object of Counted class
    Counted b;
    // Output the current count of Counted objects
    cout << "Count: " << Counted::count << endl;

    return 0;
}

