#include<iostream>
int main(){

	int  a = 65;
	switch(a){
		
			case 'A' : {		
				std::cout<<"A_Case"<<std::endl;
				}
			break;
			case 'B' : {		
				std::cout<<"B_Case"<<std::endl;
			break;
			}
			case '6' : 		
				std::cout<<"65_Case"<<std::endl;
				std::cout<<"3"<<std::endl;
			break;
			
	}
				std::cout<<"Outside Switch"<<std::endl;
	return 0 ;
}
