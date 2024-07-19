#include <iostream>
#include <utility> // for std::move

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

    // Constructor di chuyển
    MyClass(MyClass&& other) noexcept {
        data = other.data;
        other.data = nullptr;
        std::cout << "Move constructor called." << std::endl;
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

    // Toán tử gán di chuyển
    MyClass& operator=(MyClass&& other) noexcept {
        if (this == &other) {
            return *this; // Tránh tự gán
        }

        delete data; // Giải phóng tài nguyên hiện tại
        data = other.data; // Chuyển giao tài nguyên
        other.data = nullptr; // Đặt đối tượng nguồn về trạng thái trống

        std::cout << "Move assignment operator called." << std::endl;
        return *this;
    }

    // Destructor
    ~MyClass() {
        delete data;
        std::cout << "Destructor called. Memory released." << std::endl;
    }

    // Hàm để in giá trị
    void print() const {
        if (data) {
            std::cout << "Value: " << *data << std::endl;
        } else {
            std::cout << "Value: null" << std::endl;
        }
    }
};

int main() {
    MyClass a(10); // Gọi constructor mặc định
    MyClass b(std::move(a));  // Gọi constructor di chuyển
    MyClass c = std::move(b); // Gọi constructor di chuyển

    a.print();
    b.print();
    c.print();

    MyClass d(20); // Gọi constructor mặc định
    d = std::move(c); // Gọi toán tử gán di chuyển

    d.print();
    c.print();

    MyClass e(30); // Gọi constructor mặc định
    e = d; // Gọi toán tử gán sao chép

    e.print();
    d.print();

    return 0;
}
