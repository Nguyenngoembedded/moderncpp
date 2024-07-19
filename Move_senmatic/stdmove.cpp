#include <iostream>
#include <utility> // For std::move

int main() {
    // Lvalue examples
    int a = 10; // "a" is an lvalue
    int& a_ref = a; // "a_ref" is a reference to an lvalue

    // Rvalue examples
    int result = 2 + 2; // "2 + 2" is an rvalue
    int b = a + 2; // "a + 2" is an rvalue

    // Move example
    int&& c = std::move(a); // "c" is an rvalue after std::move(a)

    // Output
    std::cout << "a = " << a << std::endl;
    std::cout << "a_ref = " << a_ref << std::endl;
    std::cout << "result = " << result << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    return 0;
}
