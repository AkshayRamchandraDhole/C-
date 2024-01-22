#include<iostream>
int x = 10;
float f;
char ch = 'A';
void fun(){

	int y = 20;
	std::cout<< x << " " << y <<" " << f <<" "<<std::endl;
}
void gun(){

	int p = 40;
	std::cout<<"In gun"<<std::endl;
	fun();
	std::cout<<p<<std::endl;
}
int main(){

	int z = 30 ;
	std::cout<<"In main"<<std::endl;
	gun();
	std::cout<< z <<" " << x <<" "<<f <<std::endl;
	return 0;
}
