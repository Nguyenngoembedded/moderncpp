#include <iostream>

class MyClass {
private:
    int* data;

public:
    // Constructor mặc định
    MyClass(int value = 0) {
        data = new int;
        *data = value;
        std::cout << "Default constructor called. Value: " << *data << std::endl;
    }

    // Constructor sao chép
    MyClass(const MyClass& other) {
        data = new int;
        *data = *(other.data);
        std::cout << "Copy constructor called. Value: " << *data << std::endl;
    }

    // Toán tử gán sao chép
    MyClass& operator=(const MyClass& other) {
        if (this == &other) {
            return *this; // Tránh tự gán
        }

        *data = *(other.data);
        std::cout << "Copy assignment operator called. Value: " << *data << std::endl;

        return *this;
    }

    // Destructor
    ~MyClass() {
        delete data;
        std::cout << "Destructor called. Memory released." << std::endl;
    }

    // Hàm để in giá trị
    void print() const {
        std::cout << "Value: " << *data << std::endl;
    }
};

int main() {
    MyClass a(10); // Gọi constructor mặc định
    MyClass b(a);  // Gọi constructor sao chép
    MyClass c = a; // Gọi constructor sao chép

    a.print();
    b.print();
    c.print();

    a = b; // Gọi toán tử gán sao chép

    a.print();

    return 0;
}
