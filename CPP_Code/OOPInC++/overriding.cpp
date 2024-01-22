#include<iostream>
class Company{
int x=10;
public:
int y=20;
Company(){
	std::cout<<"In Company Default Constructor"<<std::endl;
}
void project(){
	std::cout<<"c/c++"<<std::endl;
}
};

class Emp:public Company{

int a=100;
	public:
int b=200;
Emp(){
	std::cout<<"In Emp Default Constructor"<<std::endl;
}
void project(){
	std::cout<<"Python"<<std::endl;
}
};

int main(){
Company c=Company();
Company c2;
Company *c3=new Company();
Company *c1=new Emp();
Emp e=Emp();

c1->project();
	return 0;
}
