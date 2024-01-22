#include<iostream>
int main(){

	int  a = 10;
	switch(a){
		
			case 9 : {
				int x =10;		
				int y =20;		
				std::cout<<(x+y)<<std::endl;
				}
			break;
			case 10 : {		
				int x =10;		
				int y =20;		
				std::cout<<(x-y)<<std::endl;
			break;
			}
			dafault : 		
				std::cout<<"Default_Case"<<std::endl;
			break;
			
	}
				std::cout<<"Outside Switch"<<std::endl;
	return 0 ;
}
