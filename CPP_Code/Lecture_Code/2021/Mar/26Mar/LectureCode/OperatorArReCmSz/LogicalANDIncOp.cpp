#include<iostream>
int main(){

	int x = 0;
	int y = 5;
	int ans;

	//ans = ++x && ++y ;
	
	ans = x++ && ++y ;

	std::cout<<ans<<std::endl; //1  0` 
	std::cout<<x<<std::endl;  // 1  1
	std::cout<<y<<std::endl; //6   5

	return 0;
}
