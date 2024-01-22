#include<iostream>
class MacD{
int x=10;
	public:
int y=20;
MacD(){
	std::cout<<"In MacD"<<std::endl;
}

void display(){

	std::cout<<"In Display"<<std::endl;
	std::cout<<"X:"<<x<<std::endl;
	std::cout<<"Y:"<<y<<std::endl;
}
void run(){
MacD m1;
std::cout<<"In Run"<<std::endl;
std::cout<<"X:"<<x<<std::endl;
std::cout<<"Y:"<<y<<std::endl;
}

};

int main(){
	MacD m;
	std::cout<<m.y<<std::endl;
	m.display();
	m.run();
	return 0;
}
