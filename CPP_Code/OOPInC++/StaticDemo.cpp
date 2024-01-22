#include<iostream>
class StaticDemo{
	public:
		int x=10;
		static int y;
		void M1(){
			std::cout<<"In M1..."<<std::endl;
			std::cout<<"X:"<<x<<std::endl;
			std::cout<<"Y:"<<y<<std::endl;
		}
}
;
int StaticDemo::y=20;
int main(){
StaticDemo s1=StaticDemo()   ;
StaticDemo s2=StaticDemo() ;
std::cout<<"S1 of X:"<<s1.x<<std::endl;
std::cout<<"S1 Of Y:"<<s1.y<<std::endl;

std::cout<<"S2 of X:"<<s2.x<<std::endl;
std::cout<<"S2 of Y:"<<s2.y<<std::endl;

s1.x++;
s1.y++;

std::cout<<"S1 Of X:"<<s1.x<<std::endl;
std::cout<<"S1 of Y:"<<s1.y<<std::endl;

s1.M1();

s2.x++;
s2.y++;

std::cout<<"S2 of X:"<<s2.x<<std::endl;
std::cout<<"S2 of Y:"<<s2.y<<std::endl;

return 0;
}
