#include<iostream>
int main(){

	int x = 31 ; 
	int ans ; 
	ans = ++x + x++ ;
	std::cout<<ans<<std::endl;
	std::cout<<x<<std::endl;
}
