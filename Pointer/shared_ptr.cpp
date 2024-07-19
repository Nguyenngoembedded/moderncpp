#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() {
        std::cout << "MyClass Constructor" << std::endl;
    }
    ~MyClass() {
        std::cout << "MyClass Destructor" << std::endl;
    }
    void display() {
        std::cout << "Display method called" << std::endl;
    }
};

int main() {
    // Tạo một đối tượng MyClass và quản lý nó bằng shared_ptr
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    ptr1->display();

    {
        // Tạo một shared_ptr khác sở hữu cùng đối tượng
        std::shared_ptr<MyClass> ptr2 = ptr1;
        std::cout << "ptr1 use count: " << ptr1.use_count() << std::endl;
        ptr2->display();
    } // ptr2 ra khỏi phạm vi

    std::cout << "ptr1 use count: " << ptr1.use_count() << std::endl;
    return 0;
}
