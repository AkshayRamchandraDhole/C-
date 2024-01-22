#include<iostream>
class Cricket{
int run=100;

Cricket(){
	std::cout<<"In ODI Cricket"<<std::endl;
}
public:

Cricket(int a){
	std::cout<<"In T20 Cricket"<<std::endl;
}
Cricket(Cricket &cpy){
	std::cout<<"In Test Cricket"<<std::endl;
}

int over=20;

void Scorecard(){
	std::cout<<"In Scorecard"<<std::endl;
	std::cout<<"Run="<<run<<std::endl;
	std::cout<<"Over="<<over<<std::endl;
}
};
int main(){
//Cricket c1;
Cricket *c2=new Cricket(10);
//Cricket c3;

c2->Scorecard();
return 0;
}
