#include <iostream>
using namespace std;
 
class Employee {
public:
    Employee() {
        cout << "Constructor mac dinh duoc goi..." << endl;
    }
};
 
int main(void) {
    Employee e1; //tao doi tuong Employee
    Employee e2;
    return 0;
}


