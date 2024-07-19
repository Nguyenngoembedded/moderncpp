#include <iostream>
using namespace std; 

int main (){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr ;
    
    while (ptr < arr + 5 ){
        // in ra gia tri ma con tro tro toi
        cout << *ptr << "," ; 
        ++ptr ;
        cout << endl;
    }
    return 0;
}
