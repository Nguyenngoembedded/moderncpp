# include <iostream>
///// enum trong Modern C++ / C++11
// cac phan tu enum class dc pham vi hoa ben trong chinh enum cua no => tranh xung dot thong tin

enum class Days{// declared enum class 
	Monday, 
	Tuesday, 
	Friday,
	};
int main (){
	Days today = Days::Monday; // declared today variable
		if (today == Days::Monday){
			std::cout << " Hom nay la thu hai:" << std::endl;
			}	
	return 0;
	
}

///// Cu phap co ban : enum Enumname{ danh sach ten (duoc ngan cach bang dau phay)} ten bien ;
/*
enum Colors{ Red, Green, Blue} Mycolor;
int main (){
	Mycolor = Green;
		if (Mycolor == Green){
			std::cout << " The color is Green " << std::endl ;
			}
*/

////// cu phap : enum Enumname{ Enumerator 1, Enumerator 2, .. Enumerator N } 

/* enum Colors{ Red, Green, Blue};
int main (){
	Colors Mycolor = Green;
		if ( Mycolor==Green){
		std::cout << " The color is Green" << std::endl ; 
		};
	return 0;
	
	}
	*/
		
///// gan gia tri cu the cco tung phan tu

/*enum Color{ 
	Red = 1,
	Green = 2,
	Blue = 3,
	} myColor;
int main (){
	myColor = Green;
		if ( myColor == 2 ){
			std::cout << "My favorite color is Green" << std::endl;
		}
*/		
	


		
	
