/// SomeClass.cpp - This file contains the definitions for the methods declared in SomeClass.hpp

#include "SomeClass.hpp"

// Default constructor
SomeClass::SomeClass() {
    std::cout << "Default constructor" << std::endl;
}

// Constructor with one integer parameter
SomeClass::SomeClass(int a) {
    std::cout << "Constructor with one integer: " << a << std::endl;
}

// Constructor with one integer and one float parameter
SomeClass::SomeClass(int a, float b) {
    std::cout << "Constructor with one integer and one float: " << a << ", " << b << std::endl;
}

// Destructor
SomeClass::~SomeClass() {
    std::cout << "Destructor" << std::endl;
}

