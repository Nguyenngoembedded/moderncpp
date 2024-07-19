#include <iostream>
#include <string>
using namespace std;

int main() {
    string hoten;
    string gender;
    int age;
    int date;

    cout << "Nhap thong tin" << endl;

    cout << "Nhap ho va ten: ";
    getline(cin, hoten);//Hàm này đọc toàn bộ dòng nhập vào, bao gồm cả khoảng trắng, và lưu nó vào biến hoten.

    cout << "Nhap gioi tinh: ";
    getline(cin, gender);

    cout << "Nhap tuoi: ";
    cin >> age;

    cout << "Nhap ngay sinh: ";
    cin >> date;

    cout << "Ho va ten: " << hoten << endl;
    cout << "Gioi tinh: " << gender << endl;
    cout << "Tuoi: " << age << endl;
    cout << "Ngay sinh: " << date << endl;

    return 0;
}
