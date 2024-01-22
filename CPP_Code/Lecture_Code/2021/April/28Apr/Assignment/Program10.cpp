#include<iostream>
int main(){

	int num = 0 ;
	std::cout<<"Enter Number : \n";
	std::cin>>num;
	for(int i=1;i<=num;i++){
		
		if(num%i==0)
			std::cout<<i<<std::endl;
	}
	return 0;
}
