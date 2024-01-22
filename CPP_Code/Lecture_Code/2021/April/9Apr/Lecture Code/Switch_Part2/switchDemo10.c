#include<stdio.h>
void main(){

	char ch = 'e' ;
	switch(ch){
	
		default : 
			printf("Default Case\n");
		break;
		case 'A' : {
			printf("A_Case\n");
			}
		break;
		case 'B' : {
			printf("B_Case\n");
		break;
		}
		/*default : 
			printf("Default Case\n");
		break;*/
	}
			printf("Outside Switch\n");
}
