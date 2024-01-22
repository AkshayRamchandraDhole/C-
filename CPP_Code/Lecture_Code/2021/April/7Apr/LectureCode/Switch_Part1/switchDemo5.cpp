#include<iostream>
int main(){

	int  a = 4;
	switch(a){
		
			case 1 : {		
				std::cout<<"One"<<std::endl;
				std::cout<<"1"<<std::endl;
				}
			break;
			case 2 : {		
				std::cout<<"Two"<<std::endl;
				std::cout<<"2"<<std::endl;
			break;
			}
			case 3 : 		
				std::cout<<"Three"<<std::endl;
				std::cout<<"3"<<std::endl;
			break;
			case 4 : 		
				std::cout<<"Four"<<std::endl;
				std::cout<<"4"<<std::endl;
			break;
			case 5 : 		
				std::cout<<"Five"<<std::endl;
				std::cout<<"5"<<std::endl;
			break;
	}
				std::cout<<"Outside Switch"<<std::endl;
	return 0 ;
}
