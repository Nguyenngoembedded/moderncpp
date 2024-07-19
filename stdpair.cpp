#include <iostream>
#include <string>
#include <tuple>

auto Foo() {
    return make_tuple("Super Variable", 5);
}

int main()
{
    auto [name, value] = Foo();
    std::cout << name << "has value: " << value << endl;
    return 0;
    
    
}
