#include<iostream>
int main(){
	
	int sum=0;
	int num=0;
	int rem=0;
	std::cout<<"Enter Number:"<<std::endl;
	std::cin>>num;
	while(num!=0){
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	std::cout<<"Sum = "<<sum<<std::endl;
	
}
