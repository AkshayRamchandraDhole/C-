#include<stdio.h>
void main(){
	
	int sum=0;
	int num=0;
	int rem=0;
	printf("Enter Number:\n");
	scanf("%d",&num);
	while(num!=0){
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	printf("Sum = %d\n",sum);
	
}
