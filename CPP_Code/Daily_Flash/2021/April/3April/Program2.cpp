#include<iostream>
int main(){

	int i=-30,j=20,k=1,m;
	m=++i && ++j && --k;
	std::cout<<"Value of I,J,K and L :"<<i<<" "<<j<<" "<<k<<" "<<m<<" "<<std::endl;
	return 0;
}
