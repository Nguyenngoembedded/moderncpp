#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[1];  // ptr1 trỏ tới arr[1] (giá trị 20)
    int *ptr2 = &arr[4];  // ptr2 trỏ tới arr[4] (giá trị 50)

    cout << ptr1 <<endl;
    cout <<  &arr[1] <<endl;
    // Phép trừ giữa hai con trỏ
    int distance = ptr2 - ptr1;  // Tính khoảng cách giữa ptr2 và ptr1

    // In ra khoảng cách
    cout << "Khoang cach giua ptr2 va ptr1 la: " << distance << " phan tu." << endl;

    return 0;
}