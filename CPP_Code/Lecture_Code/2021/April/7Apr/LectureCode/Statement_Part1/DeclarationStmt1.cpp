#include<iostream>
int main(){

	extern int a=10;
	//int b=20;
	std::cout<<a<<std::endl;
	//std::cout<<b<<std::endl;
	std::cout<<sizeof(a)<<std::endl;
	//std::cout<<sizeof(b)<<std::endl;
	return 0;
}
