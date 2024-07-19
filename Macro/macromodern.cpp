#include <iostream>
#include <vector>

// Define a constexpr constant to replace a macro constant
constexpr double PI = 3.14159;

// Define an inline function to replace a macro function
inline int square(int x) {
    return x * x;
}

int main() {
    // Use constexpr to replace a macro constant
    double radius = 5.0;
    double circumference = 2 * PI * radius;
    std::cout << "Circumference: " << circumference << std::endl;

    // Use inline function to replace a macro function
    int num = 5;
    int square_num = square(num);
    std::cout << "Square of " << num << " is " << square_num << std::endl;

    // Use auto to automatically deduce the type of the variable
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Use decltype to determine the type of an expression
    decltype(vec)::iterator iter = vec.begin();
    std::cout << "First element in vector: " << *iter << std::endl;

    // Use static_assert to check conditions at compile time
    static_assert(sizeof(int) == 4, "Int must be 4 bytes");
    //static_assert(sizeof(int) == 8, "Int must be 8 bytes");
    return 0;
}
