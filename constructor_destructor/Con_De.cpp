#include <iostream>

class SomeClass {
    public:
        SomeClass(){
            std::cout << " Default constructor" << std::endl;
        };
        SomeClass(int a){
            std::cout << " Constructor with one interger : " << a <<std::endl;
        };
        SomeClass(int a, float b){
            std::cout << " Constructor with one interger and one float : " << a << " , " << b << std::endl;
        };
        ~SomeClass(){
            std::cout << " Destructor " << std:: endl;
            };
};

int main(){
    SomeClass var_1 ; // default constructor
    SomeClass var_2(10); 
///// Dung dau {} de kiem tra kieu du lieu cua gia tri truyen vao => tranh cac loi chuyen doi kieu du lieu khong mong muon 
///// Tranh hieu ung tiem an (Narrowing Conversions)
    SomeClass var_3{10}; // Direction Initialization , just using Modern c++
    SomeClass var_4 = {10}; // Same as var_3 , gán giá trị = {10} cho đối tượng var_4
    SomeClass var_5{10, 10.1f};
    SomeClass var_6 = {10, 10.1f};

    return 0;
}
