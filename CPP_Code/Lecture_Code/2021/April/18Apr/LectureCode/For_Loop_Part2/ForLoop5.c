#include<stdio.h>
void main(){

	for(int i=1;i<=20;i++){
		
		if(i%5==0)	
			printf("%d\t is divisible by 5 \n",i);
		else	
			printf("%d\t is not divisible by 5 \n",i);
	}
}