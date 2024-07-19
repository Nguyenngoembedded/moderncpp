#include<iostream>
using namespace std;
void changePointer (int **ptr){
    static int newValue = 20;
    *ptr = &newValue;
}

int main(){ 
    int var = 10;
    int *ptr = &var;
    cout << " Gia tri ban dau cua *ptr: " << *ptr << endl;
    changePointer(&ptr);
    cout << " Gia tri moi cua *ptr: " << *ptr << endl;
    return 0; 
    
}