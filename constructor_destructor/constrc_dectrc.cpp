#include <iostream>

class SomeClass {
    public:
        SomeClass();
        SomeClass(int a);
        SomeClass(int a, float b);
        ~SomeClass();
};

// Định nghĩa các phương thức bên ngoài lớp
SomeClass::SomeClass() {
    std::cout << "Default constructor" << std::endl;
}

SomeClass::SomeClass(int a) {
    std::cout << "Constructor with one integer: " << a << std::endl;
}

SomeClass::SomeClass(int a, float b) {
    std::cout << "Constructor with one integer and one float: " << a << ", " << b << std::endl;
}

SomeClass::~SomeClass() {
    std::cout << "Destructor" << std::endl;
}

int main() {
    SomeClass var_1;
    SomeClass var_2(10);
    SomeClass var_3{10};        // List initialization
    SomeClass var_4 = {10};     // List initialization
    SomeClass var_5{10, 10.0};  // List initialization
    SomeClass var_6 = {10, 10.0}; // List initialization
    return 0;
}
