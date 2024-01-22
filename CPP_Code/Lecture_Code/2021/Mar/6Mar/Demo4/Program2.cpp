#include<iostream>
class Ghar{

	int tijori = 5;
	
	public : 
		int tv = 1;
		
		void access(){
		
			std::cout<<"Access"<<std::endl;
		}

};
int main(){

	Ghar mazeGhar;
	Ghar MadhurGhar;

	//mazeGhar.tijori;
	mazeGhar.tv;
}
