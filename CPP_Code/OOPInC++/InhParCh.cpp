#include<iostream>
class Parent{
int x=10;
	public:
int y=20;
Parent(){
	std::cout<<"In Parent Constructor"<<std::endl;
}

void display(){
	std::cout<<"X:"<<x<<std::endl;
	std::cout<<"Y:"<<y<<std::endl;
	std::cout<<"In Display"<<std::endl;
}
};
class Child:public Parent{
int p=100;
public:
int q=200;
Child(){
	std::cout<<"In Child Constructor"<<std::endl;
}

void print(){
	 std::cout<<"P:"<<p<<std::endl;
	   std::cout<<"Q:"<<q<<std::endl;
	std::cout<<"In Print"<<std::endl;
}
};
int main(){
Parent p;
Child c;
c.display();
c.print();
return 0;
}
