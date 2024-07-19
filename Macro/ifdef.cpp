#define DEBUG

// check macro that had defined
#ifdef DEBUG 
    #include <iostream>
    #define LOG(msg) std::cout << "DEBUG LOG: " << msg << std::endl
#else
    #define LOG(msg)
#endif

int main() {
    LOG("This is a debug log message");
    return 0;
}
