#include<iostream>
int main(){
	
	int num=0;
	int i=1;
	for(;i<=20;){
	std::cout<<"Enter Num:"<<std::endl;
	std::cin>>num;
	if(num%2==0 )
		std::cout<<num<<std::endl;
	else
		break;

	i++;
	}
	
	std::cout<<"Out Of Loop"<<std::endl;
	return 0;

}


