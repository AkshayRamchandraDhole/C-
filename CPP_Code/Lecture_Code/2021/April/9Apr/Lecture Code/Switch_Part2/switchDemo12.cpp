#include<iostream>
int main(){
		
	char ch = '/';
	int  x = 10;
	int  y = 20;
	switch(ch){
		
			case '+' : {
				std::cout<<(x+y)<<std::endl;
				}
			break;
			case '-' : {			
				std::cout<<(x-y)<<std::endl;
			break;
			}
			case '*' : {			
				std::cout<<(x*y)<<std::endl;
			break;
			}
			case '/' : {			
				std::cout<<(x/y)<<std::endl;
			break;
			}
			dafault : 		
				std::cout<<"Default_Case"<<std::endl;
			break;
			
	}
				std::cout<<"Outside Switch"<<std::endl;
	return 0 ;
}
