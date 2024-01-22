#include<iostream>
int main(){

	int x = 10 ;
	int i = 1;
	for(;i<=x;){
		i++;
		goto fordemo;
	}
	fordemo:
		std::cout<<"Printing....\n";
		
	return 0;
}
