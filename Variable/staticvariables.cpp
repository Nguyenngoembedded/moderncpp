#include <iostream>
using namespace std;

void doSomething() {
    static int s_value;
    ++ s_value;
    cout << s_value << endl;
}

int main(){
/// After each time  
//// the function is called , the s_value is not reinitalized and incremented by 1 value 

    doSomething(); 
    doSomething();
    doSomething();

    return 0;
}