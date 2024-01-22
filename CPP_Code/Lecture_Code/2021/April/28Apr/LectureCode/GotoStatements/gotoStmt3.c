#include<stdio.h>
void main(){


	int x = 10;
	int i = 1;
	fordemo:
		printf("Printing....\n");
	
	for(;i<=x;){
		i++;
		goto fordemo;
	}
	printf("After for loop\n");
	
	//fordemo:
	//	printf("Printing....\n");
	

}
