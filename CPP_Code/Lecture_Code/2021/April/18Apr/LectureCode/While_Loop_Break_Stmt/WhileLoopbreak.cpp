#include<iostream>
int main(){
	
	int num=0;
	int i=1;
	while(i<=20){
	std::cout<<"Enter Num:"<<std::endl;
	std::cin>>num;
	if(num%4==0 && num % 10 ==0)
		break;
	else
		std::cout<<num<<std::endl;

	i++;
	}

}


