#include<iostream>
int main(){

	int  a = 20 ;
	int  b = 30 ;
	switch(a){
		case 20 :
			std::cout<<"20"<<std::endl;
		break;
		
		case 30 :
			std::cout<<"30"<<std::endl;
		break;
	}
		std::cout<<"Ouside 1st Switch"<<std::endl;
	switch(b){

		case 30 :
			std::cout<<"30"<<std::endl;
		break;
		
		case 20 :
			std::cout<<"20"<<std::endl;
		break;
	}
		std::cout<<"Ouside 2nd Switch"<<std::endl;
	return 0 ;
}
