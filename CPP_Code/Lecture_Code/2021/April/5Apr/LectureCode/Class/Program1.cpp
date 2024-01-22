#include<iostream>
class UK{

	public:

	void printCountries(){
	
		std::cout<<"England,Wales,Scottland,Northen Ireland"<<std::endl;
	}
};
void europeanUnion(){

	std::cout<<"28 Countries"<<std::endl;
}
int main(){

	UK obj1;
	obj1.printCountries();
	europeanUnion();
	return 0;
}
