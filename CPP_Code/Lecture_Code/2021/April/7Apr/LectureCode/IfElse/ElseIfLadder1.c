#include<stdio.h>
void main(){
	int marks = 35 ;
	//int compMarks = 60 ;
	if(marks > 80 )
			printf("FC\n");
	else if(marks > 70 && marks < 80)
			printf("Modern\n");
	else if(marks > 60 && marks < 70)
				printf("Garware\n");
	else
			printf("JayKranti\n");
	
	printf("End of If\n");
}
