#include "SomeClass.hpp"

int main() {
    SomeClass var_1;
    SomeClass var_2(10);
    SomeClass var_3{10};        // List initialization
    SomeClass var_4 = {10};     // List initialization
    SomeClass var_5{10, 10.1f};  // List initialization
    SomeClass var_6 = {10, 10.1f}; // List initialization
    return 0;
}
