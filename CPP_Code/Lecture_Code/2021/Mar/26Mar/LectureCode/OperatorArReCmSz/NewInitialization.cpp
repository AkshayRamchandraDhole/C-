#include<iostream>
int main(){

	int x = 10;

	int y(10); //(Copy Initialization)

	int z{10}; // (Uniform Initilization in C++11)

	std::cout<<x<<std::endl; //10
	std::cout<<y<<std::endl; //10
	std::cout<<z<<std::endl; //10
	return 0;
}
