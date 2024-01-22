#include<iostream>
class Demo{
	int x=100;
	int a=200;
	public:
		Demo(){
			std::cout<<"In Deafult Demo"<<std::endl;
		}
//		Demo(int x){
//		std::cout<<"In Para Demo"<<std::endl;
//		}
	       void fun(){
			std::cout<<"In Fun with Zero Argu..."<<std::endl;
		}
		void fun(int a){
			std::cout<<"In Fun with one Argu...."<<std::endl;
		}
		void fun(Demo d3){
			std::cout<<"In Fun Demo Parameter..."<<std::endl;
		}

};
int main(){
	Demo d;
	//d.fun();
	//Demo d1(10);
	//d1.fun(10);
	Demo d5;
	d5.fun(d);
	return 0;
}
