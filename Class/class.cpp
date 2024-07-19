///// class la mot nhom cac doi tuong , no la 1 khuon mau va tu do cac doi tuong ra doi 
///// class co các truong, phuong thuc, constuctor...

#include <iostream>
using namespace std;

class Student {
	public: 
		int id ;
		string name ;
	};
	
int main(){
	Student s1; // tao doi tuong Student
	s1.id = 1001;
	s1.name = "Ngo";
	cout << s1.id << endl;
	cout << s1.name << endl;
	
	return 0;
	
}
	
	

