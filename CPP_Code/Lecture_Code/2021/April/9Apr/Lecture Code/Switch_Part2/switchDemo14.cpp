#include<iostream>
int main(){

	char ch = '>';
	switch(ch){

			case '<':{
				int a = 5 ;
				int b = 0 ;
				switch(a && b){
						
						case 0:
							std::cout<<"False"<<std::endl;
						break;
						case 1:
							std::cout<<"True"<<std::endl;
						break;
				}
			break;
			}
			case '>':{
				int p = 5 ;
				int q = 0 ;
				switch( p || q){
						
						case 0:
							std::cout<<"False"<<std::endl;		
						break;
						case 1:
							std::cout<<"True"<<std::endl;		
							//printf("True\n");
						break;
				}
			break;
			}
			default :
				std::cout<<"Default case"<<std::endl;		
				//printf("Default case\n");
			break;
	}
		std::cout<<"Outside Switch"<<std::endl;
}
