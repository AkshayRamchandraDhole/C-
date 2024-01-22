#include<iostream>
int main(){

	int x = 10 ;
	int y = 20 ;
	int z = (++x,y++);


	std::cout<<x<<std::endl;  //11
	std::cout<<y<<std::endl;  //21 
	std::cout<<z<<std::endl;  //20

	return 0;
}
