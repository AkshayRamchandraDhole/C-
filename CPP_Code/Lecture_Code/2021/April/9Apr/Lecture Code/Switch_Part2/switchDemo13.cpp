#include<iostream>
int main(){

	int  a = 10;
	switch(a){
		
			case 5+5 : {	
				std::cout<<"5+5"<<std::endl;
				}
			break;
			case 6+4 : {	
				std::cout<<"6+4"<<std::endl;
				}
			break;
			case 10 : {				
				std::cout<<"10"<<std::endl;
			break;
			}
			dafault : 		
				std::cout<<"Default_Case"<<std::endl;
			break;
			
	}
				std::cout<<"Outside Switch"<<std::endl;
	return 0 ;
}
