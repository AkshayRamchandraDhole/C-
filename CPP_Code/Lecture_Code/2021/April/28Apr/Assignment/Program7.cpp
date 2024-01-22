#include<iostream>
int main(){

	int num=0,limit=0;
	std::cout<<"Enter Number : \n";
	std::cin>>num;
	std::cout<<"Enter limit : \n";
	std::cin>>limit;
	for(int i=1;i<=limit;i++){
		
		if(i%num==0)
			std::cout<<i<<std::endl;
	}
	return 0;
}
