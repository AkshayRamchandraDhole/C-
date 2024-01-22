#include<iostream>
int main(){

	int x = 7 ;
	std::cout<<"goto Statements\n";
	goodmorning:
		std::cout<<"Good Morning!!!\n";
		std::cout<<"Have a nice day\n";
		x--;
	if(x > 5 )
		goto goodmorning;
	return 0;
}
