#include<iostream>
int main(){

	int x ; 
	int y ;
	int ans;

	std::cout<<"Enter X : "<<std::endl;
	std::cin>>x;
	
	std::cout<<"Enter Y : "<<std::endl;
	std::cin>>y;

	if(x > y)
		std::cout<<"X grater than Y"<<std::endl;
	if(x < y)
		std::cout<<"X Less than Y"<<std::endl;
	if(x >= y)
		std::cout<<"X grater than or equal to Y"<<std::endl;
	if(x <= y)
		std::cout<<"X Less than or equal to Y"<<std::endl;
	if(x == y)
		std::cout<<"X & Y are same"<<std::endl;
	if(x != y)
		std::cout<<"X and Y are not equal"<<std::endl;

	return 0;
}
