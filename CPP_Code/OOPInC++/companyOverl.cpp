#include<iostream>
class Company{
	public:
		Company(){
			std::cout<<"In Company Default Constructor"<<std::endl;
		}
		Company(int a){
			std::cout<<"Branch:"<<a<<std::endl;
		}
		void info(std::string cname){
			std::cout<<"Name:"<<cname;
		}

};
class Emp{
	public:
		Emp(){
			std::cout<<"In Emp Default Constructor"<<std::endl;
		}
		Emp(std::string ename){
			std::cout<<"In Emp Para Constructor"<<std::endl;
		}
};
int main(){
	Emp e1;
	Emp e2("Akshu");
	Company c1;
	Company c2(101);
	c1.info("Akshay");


	return 0;
}
