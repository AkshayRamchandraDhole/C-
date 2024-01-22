#include<iostream>
int main(){
	for(int i=1;i<=20;i++){
		
		if(i%5==0)
			std::cout<< i <<" is divisible by 5"<<std::endl;
		else	
			std::cout<<i<<" is not divisible by 5"<<std::endl;	
	}
	return 0;
}
