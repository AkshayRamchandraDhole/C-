#include<iostream>
class VodafoneEmp{


	public:

	void accessSNOC(){
	
		std::cout<<"Superior Network Operation Center"<<std::endl;
	}
};
void cab(){

	std::cout<<"Going office via cab"<<std::endl;
}
int main(){

	VodafoneEmp emp1;
	emp1.accessSNOC();
	cab();
	return 0;
}
