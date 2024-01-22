#include<iostream>
int main(){

	char ch = 'e' ;
	switch(ch){
		
			case 'A' : {		
				std::cout<<"A_Case"<<std::endl;
				}
			break;
			default : 		
				std::cout<<"Default Case"<<std::endl;
			break;
			case 'B' : {		
				std::cout<<"B_Case"<<std::endl;
			break;
			}
	/*		default : 		
				std::cout<<"Default Case"<<std::endl;
			break;*/
			
	}
				std::cout<<"Outside Switch"<<std::endl;
	return 0 ;
}
