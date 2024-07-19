#include<iostream>
//tpyedef voi cac kieu du lieu da ton tai

/*
typedef int interger;
int main(){
 interger a=10, b=15;
 interger add = a+ b;
 std::cout<<"sum: "<<add<<std::endl;
 */
 
 // typedef voi cau truc Struct
 
/*typedef struct {
 	int x;
 	int y;
 	} Point;
 	
int main(){
	Point p1;
	p1.x = 10;
	p1.y = 11;
	std::cout << "Toa do cua p1 la: ("<< p1.x << "," << p1.y << ") " << std::endl;
*/

// typedef su dung voi  CON TRO
/* typedef int*IntPointer;
int main(){
	int x = 10;
	IntPointer p = &x;
	std::cout << "gia tri cua x "<< *p << std::endl;
*/

// typedef voi ham CON TRO
typedef void(*Funcpointer)(int n);
void printNumber (int n){
	std::cout << " Number:" << n << std::endl;
	}
int main(){	
Funcpointer func = printNumber ;
	func(10);

 return 0;
}
