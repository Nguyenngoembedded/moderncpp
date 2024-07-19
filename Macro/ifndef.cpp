#include <iostream>
#ifndef RELEASE
// Kiểm tra nếu RELEASE chưa được định nghĩa
    #define LOG(msg) std::cout << "LOG: " << msg << std::endl
#else
    #define LOG(msg)
#endif

int main() {
    LOG("This is a log message");
    return 0;
}
