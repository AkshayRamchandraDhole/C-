#include<iostream>
int main(){
	int i=1;
	while(i<=100){
	
		if(i%5==0 && i%15==0){
			break;
		}else{
			std::cout<<i<<std::endl;
		}
	i++;
	}
	return 0;
}
