#include<stdio.h>
void main(){

	int  a = 10;
	switch(a){
	
		case 5+5 : {
			printf("5+5\n");
			}
		break;
		case 6+4 : {
			printf("6+4\n");
		break;
		}
		case 10 : {
			printf("10\n");
		break;
		}
		default : 
			printf("Default_Case\n");
		break;
	}
			printf("Outside Switch\n");
}
