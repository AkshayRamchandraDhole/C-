#include<iostream>
int main(){

	int num = 50 ;
	for(int i=1;i<=50;i++){
		
		if(num%i==0)
			std::cout<<i<<std::endl;
	}
	return 0;
}
