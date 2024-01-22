#include<iostream>
int main(){

	int x = 45 ; 
	int ans ; 
	ans = x++ + x++ + x++;
	std::cout<<ans<<std::endl;
	std::cout<<x<<std::endl;
}
