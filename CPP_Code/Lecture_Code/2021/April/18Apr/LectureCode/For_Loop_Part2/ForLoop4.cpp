#include<iostream>
int main(){
	for(int i=1;i<=20;i++){
		
		if(i%2==0)
			std::cout<<"Even = "<<i<<std::endl;
		else	
			std::cout<<"Odd = "<<i<<std::endl;	
	}
	return 0;
}
