#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    for(int i; i < 5 ; i++){
        cout << " Gia tri cua arr[" << i << "]" << *(ptr + i) << endl;
    }
    return 0;
}