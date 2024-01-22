#include<stdio.h>
void main(){
	int marks = 80 ;
	int compMarks = 60 ;
	if(marks > 70 ){
			printf("FC/Modern ?\n");
			if(compMarks > 80)
				printf("FC-BCS\n");
			else
				printf("Modern-BSC\n");
	}else{
			printf("Sportsman - Cricket\n");
	}
	printf("End of If\n");
}
