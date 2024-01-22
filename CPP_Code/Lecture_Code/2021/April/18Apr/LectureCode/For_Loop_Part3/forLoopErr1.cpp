#include<iostream>
int main(){
	int i=97;
	/*r(;i<=122;i++)
		std::cout<<i<<std::endl;
	*/
	for(;i<=122;i++)
		std::cout<<"In For Loop"<<std::endl;
		std::cout<<i<<std::endl;
	for(;i<=122;i++);{
		std::cout<<"In For Loop"<<std::endl;
		std::cout<<i<<std::endl;
	}
	return 0;
}
