#include <iostream>
using namespace std;

class Employee {
    public: 
        Employee (){
            cout << " Khoi tao Constructor..." << endl;
        }

        ~Employee (){
            cout << " Khoi tao Destructor..." << endl;
        }
};

int main (void) {
    Employee e1; // tao doi tuong e1
    Employee e2; // tao doi tuong e2
    return 0;
}