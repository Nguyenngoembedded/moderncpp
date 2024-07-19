// C++ program to illustrate the multiline macros 
#include<iostream>

// allow us to define multiple lines of code as a single macro, using "\"
// Define a macro for printing a rectangle with a given 
// width and height
#define PRINT_RECTANGLE(width, height)              \
    for (int i = 0; i < height; i++) {              \
        for (int j = 0 ; j < width; j++) {          \
            std::cout << "*";                       \
        }                                           \
        std::cout << std::endl;                     \
    }

int main()
{
    // Print a rectangle with a width of 4 and a height of 5 
    PRINT_RECTANGLE(4, 5);
    return 0;
}