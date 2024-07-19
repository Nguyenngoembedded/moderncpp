#include <iostream>
#include <memory>  // Thư viện để sử dụng con trỏ thông minh
#include <utility> // Thư viện để sử dụng std::move

class MyClass {
public:
    MyClass() {
        std::cout << "MyClass Constructor" << std::endl;
    }
    ~MyClass() {
        std::cout << "MyClass Destructor" << std::endl;
    }
    void display() {
        std::cout << "Display method called\n";
    }
}; 

int main() {
    // Tạo một unique_ptr để quản lý MyClass
    std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>();
    ptr1->display();

    // Chuyển quyền sở hữu từ ptr1 sang ptr2
    std::unique_ptr<MyClass> ptr2 = std::move(ptr1);
    if (!ptr1) {
        std::cout << "ptr1 is now null\n"; // ptr1 hiện tại là null
    }

    ptr2->display();
    return 0; // Khi ptr2 bị hủy, đối tượng MyClass cũng bị hủy tự động
}
