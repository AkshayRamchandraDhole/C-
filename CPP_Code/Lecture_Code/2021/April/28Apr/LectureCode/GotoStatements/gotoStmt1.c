#include<stdio.h>
void main(){


	int x = 7;
	printf("goto Statements\n");
	
	goodmorining:
		printf("Good Morining!!!\n");
		printf("Have a noce day\n");
		x--;
	//goto goodmorining;
	if(x > 5 )
		goto goodmorining;
		//printf("Good Afternoon\n");

}
