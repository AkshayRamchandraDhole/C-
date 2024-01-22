#include<iostream>
class Core{
int x=10;
int y=20;
public:
Core(){
	std::cout<<"In Default Contructor"<<std::endl;
}
Core(int x){
//this->x=x;
std::cout<<"Value Of X:"<<this->x<<std::endl;
std::cout<<"Value Of X:"<<x<<std::endl;
std::cout<<"In Para Constructor"<<std::endl;
}
void display(int y){
std::cout<<"In Display....."<<std::endl;
std::cout<<"Value Of Y:"<<y<<std::endl;
std::cout<<"Value Of Y:"<<this->y<<std::endl;
}

void pd(){
	std::cout<<"Pd nhi return Kela...."<<std::endl;
}
};

int main(){
Core c;
Core c1(50);
c.display(100);
Core *c3=new Core();
c3->pd();
return 0;
}
