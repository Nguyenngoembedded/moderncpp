
#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[1];
    int *ptr2 = &arr[4];

    if(ptr1 < ptr2){
        cout <<  "ptr tro toi phan tu truoc ptr2 " <<endl;
    }
return 0;
}