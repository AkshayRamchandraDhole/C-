#include<iostream>
int main(){
	int marks = 80 ;
	int compMarks = 70 ;
	if(marks > 70 ){
			std::cout<<"FC/Modern ?"<<std::endl;
			
			if(compMarks > 90)
				std::cout<<"FC-BCS"<<std::endl;
			else
				std::cout<<"Modern-BSC"<<std::endl;
	}else{
			std::cout<<"Sportsman - Cricket"<<std::endl;
	}	
	return 0;
}
