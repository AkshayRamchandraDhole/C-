#include<iostream>
class A{
int x=10;
	public:
int y=20;
A(){
	std::cout<<"In A Default Constructor"<<std::endl;
}
void project(){
	std::cout<<"C/C++"<<std::endl;
}
};
class B:public A{
int a=100;
public:
int b=200;
B(){
	std::cout<<"In Default B Constructor"<<std::endl;
}
void project(){
	std::cout<<"Python"<<std::endl;
}

}
;
int main(){
	A *a=new A();
	B *b=new B();
	A *a1=new B();
	A a3;
	A a2=B();
	
       	std::cout<<sizeof(*a)<<std::endl;
	std::cout<<sizeof(b)<<std::endl;
	std::cout<<sizeof(*b)<<std::endl;
	std::cout<<sizeof(*a1)<<std::endl;
        std::cout<<sizeof(a)<<std::endl;
	std::cout<<sizeof(a2)<<std::endl;
	a3.project();
	b->project();


	return 0;
}
