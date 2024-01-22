#include<iostream>
int main(){

	int x = 45 ; 
	int ans ; 
	//ans = --x + --x ;  // 86
	//ans = x-- + x-- ;   // 89
	//ans = --x + --x + --x; // 128
	//ans = x-- + x-- + x-- ; //142
	ans = --x + x-- ; //87
	std::cout<<ans<<std::endl;
	std::cout<<x<<std::endl;
}
