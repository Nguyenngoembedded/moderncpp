#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int *ptr = &var;     // ptr trỏ tới var
    int **ptr2ptr = &ptr; // ptr2ptr trỏ tới ptr

    // In ra giá trị của var thông qua con trỏ tới con trỏ
    cout << "Giá trị của var: " << var << endl;
    cout << "Giá trị của *ptr: " << *ptr << endl;
    cout << "Giá trị của **ptr2ptr: " << **ptr2ptr << endl;

    // In ra địa chỉ của var, ptr, và ptr2ptr
    cout << "Địa chỉ của var: " << &var << endl;
    cout << "Địa chỉ của ptr: " << &ptr << endl;
    cout << "Địa chỉ của ptr2ptr: " << &ptr2ptr << endl;

    return 0;
}
