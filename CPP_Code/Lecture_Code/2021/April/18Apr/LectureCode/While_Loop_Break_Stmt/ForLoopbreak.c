#include<stdio.h>
void main(){
	
	int num=0;
	int i=1;
	for(;i<=20;){
		printf("Enter Num:\n");
		scanf("%d",&num);
		if(num%2==0)
			printf("%d\n",num);
		else
			break;
		i++;
	}
	printf("Out of Loop\n");

}
