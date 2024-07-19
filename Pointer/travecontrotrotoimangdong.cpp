#include <iostream>
using namespace std;

int* createArray(int size) {
    int *array = new int[size];  // Cấp phát mảng động
    for (int i = 0; i < size; ++i) {
        array[i] = i + 1;
    }
    return array;  // Trả về con trỏ trỏ tới mảng động
}

int main() {
    int size = 5;
    int *arr = createArray(size);

    cout << "Gia tri c mảng: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;  // Giải phóng mảng động
    return 0;
}
