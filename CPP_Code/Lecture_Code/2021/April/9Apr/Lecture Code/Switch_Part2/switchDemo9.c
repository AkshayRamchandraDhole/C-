#include<stdio.h>
void main(){

	int  a = 65;
	switch(a){
	
		case 'A' : {
			printf("A_Case\n");
			}
		break;
		case 'B' : {
			printf("B_Case\n");
		break;
		}
		case '6' : 
			printf("65_Case\n");
		break;
	}
			printf("Outside Switch\n");
}
