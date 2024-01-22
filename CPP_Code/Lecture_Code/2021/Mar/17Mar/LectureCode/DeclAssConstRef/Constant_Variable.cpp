#include<iostream>
int main(){

	const int x = 10 ;
	int y = 20 ;

	std::cout<<x<<" "<<y<<std::endl;

	//x=30; error
	//y=x; work
	//x=y; error
	
	std::cout<<x<<" "<<y<<std::endl;

}
