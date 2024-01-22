#include<iostream>
int main(){

	int x = 10 ;
	int y = 20 ;

	std::cout<<x<<" "<<y<<std::endl;
	std::cout<<&x<<" "<<&y<<std::endl;

	int &z = x;
	
	std::cout<<x<<" "<<z<<std::endl;
	std::cout<<&x<<" "<<&z<<std::endl;

	z = 40 ;
	
	std::cout<<x<<" "<<z<<std::endl;
	std::cout<<&x<<" "<<&z<<std::endl;
}
