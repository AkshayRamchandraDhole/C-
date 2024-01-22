#include<iostream>
class Const{
int x=10;
	public:
int y=20;

Const(){
	std::cout<<"In Default Conctructor"<<std::endl;
}

Const(int x){
	std::cout<<"In Para Constructor"<<std::endl;
}

Const(Const &cpy){
	std::cout<<"In Copy Constructor"<<std::endl;
}
};

int main(){
//Const *c=new Const();//Heap
Const cc;
Const cp(cc);
Const c1=cc;
return 0;

}
