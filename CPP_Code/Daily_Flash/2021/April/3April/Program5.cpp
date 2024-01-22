#include<iostream>
int main(){

	int x=3;
	int a = x++ + x++ + ++x;
	std::cout<<"Value of X and A :"<<x<<" "<<a<<" "<<std::endl;
	return 0;
}
