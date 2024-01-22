#include<stdio.h>
void main(){

	int  a = 20 ;
	int  b = 30 ;
	switch(a){
	
		case 20 :
			printf("20\n");
		break;
		
		case 30 :
			printf("30\n");
		break;
	} 
			printf("Outside 1st Switch\n");
	switch(b){

		case 30 :
			printf("30\n");
		break;
		
		case 20 :
			printf("20\n");
		break;
	}
		printf("Outside 2nd Switch\n");
}
