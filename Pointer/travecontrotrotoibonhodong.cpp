#include<iostream>
using namespace std;

int* allowcateMemory(){
    // dung toan tu ' new ' de cap phat bo nho dong
    int *ptr = new int;
    *ptr = 30;
    // AN TOAN: tra ve con tro tro toi bo nho dong
    return ptr;
}

int main(){
    int *ptr = allowcateMemory();
    cout << " Gia tri cua ptr: " << *ptr << endl;
    // giai phong bo nho dong 
    delete ptr;
    return 0;

}
