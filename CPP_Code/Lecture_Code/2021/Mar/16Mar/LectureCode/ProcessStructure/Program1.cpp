#include<iostream>
int x = 10;
float f;
void fun(){

	int y = 20;
	std::cout<< x << " " << y <<" " << f <<" "<<std::endl;
}
int main(){

	int z = 30 ;
	std::cout<<"In main"<<std::endl;
	fun();
	std::cout<< z <<" " << x <<" "<<f <<std::endl;
	return 0;
}
