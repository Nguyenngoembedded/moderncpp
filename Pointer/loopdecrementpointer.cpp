#include <iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr +  4;
    while (ptr>=arr)
    {
        cout << *ptr << ",";
        ptr--;
        cout<<endl;

    }
  return 0;  
}

