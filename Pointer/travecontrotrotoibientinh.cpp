#include<iostream>
using namespace std;

int* getStaticPointer(){
    static int staticvar = 20;
    return &staticvar;

}
int main(){
    int *ptr = getStaticPointer();
    cout << " Gia tri cua ptr : " << *ptr <<endl;
    return 0; 
}