#include<stdio.h>
void main(){
	
	int num=0;
	int i=1;
	while(i<=20){
		printf("Enter Num:\n");
		scanf("%d",&num);
		if(num%4==0 && num%10==0)
				break;
		else
			printf("%d\n",num);
		i++;
	}
	printf("Out of Loop\n");

}
