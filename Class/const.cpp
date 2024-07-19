#include <iostream>
#include <string>

class Student {
public:
    // Constructor khởi tạo ID và tên
    // su dung const để khong cho phép thay đổi name_ bên trong constructor
    Student(int id, const std::string& name) : id_{id}, name_{name} {}

    // Hàm getter cho ID
    //  cho phép lấy giá trị của id_ mà không thay đổi trạng thái của đối tượng Student
    int getId() const { return id_; }

    // Hàm getter cho tên sinh viên
    // cho phép lấy giá trị của name_ mà không thay đổi trạng thái của đối tượng Student.
    const std::string& getName() const { return name_; }

private:
    int id_;
    std::string name_;
};

int main() {
    Student student1(1, "Ngo");

    // Sử dụng getter để lấy thông tin của sinh viên
    std::cout << "Student ID: " << student1.getId() << std::endl;
    std::cout << "Student Name: " << student1.getName() << std::endl;

    return 0;
}
