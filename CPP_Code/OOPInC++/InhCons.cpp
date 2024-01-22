#include<iostream>
class Cricket{
	public:
		Cricket(){
		
		std::cout<<"In Cricket Constructor"<<std::endl;
		}
		Cricket(int x){
			std::cout<<"In Cricket Parameterized"<<std::endl;
		}
};

class ODI:public Cricket{
	public:
		//ODI(){
		//	std::cout<<"In ODI Default Constructor"<<std::endl;
		//}
		ODI(int y){
			std::cout<<"in ODI Parameterized"<<std::endl;
		}

};

int main(){
ODI O(100);
return 0;
}
