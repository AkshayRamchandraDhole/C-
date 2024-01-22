#include<iostream>
int main(){

	int x;
	int y;

	std::cout<<"Enter Values:"<<std::endl;
	std::cin>>x>>y;

	int ans;
	ans=(x < y) ? x : y;


	std::cout<<ans<<std::endl;
	return 0;

}
