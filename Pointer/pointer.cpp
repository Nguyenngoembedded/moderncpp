#include<iostream>
using namespace std;

int main()
{ 
 // khai bao bien binh thuong
    int x = 10; 
// con tro ip tro toi bien x
    int *ip = &x;
    cout << " Value of x: " << x << endl;
    cout << " Address of x: " << &x << endl;
    cout << " Value of ip: " << ip << endl;
    cout << " Value pointed to by ip: " << *ip << endl;
// thay doi gia tri cua x thong qua con tro ip
    *ip = 20 ;
    cout << " New value of x: " << x << endl;
    return 0;
}
