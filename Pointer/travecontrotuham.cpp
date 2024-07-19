#include <iostream>
using namespace std;

int* getLocalPointer() {
    int localVar = 10;
    return &localVar;  // Lỗi: Trả về con trỏ trỏ tới biến cục bộ
}

int main() {
    int *ptr = getLocalPointer();
    cout << "Giá trị của ptr: " << *ptr << endl;  // Không xác định
    return 0;
}
