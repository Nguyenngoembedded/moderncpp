#include <iostream>
#include <string>
#include <utility>

std::pair<std::string, int> foo (){
    return std::pair{"Super Variable",5};
}

int main(){
    auto result = foo();
        std::cout << result.first << "have value:" << result.second << std::endl;
    

return 0;
}