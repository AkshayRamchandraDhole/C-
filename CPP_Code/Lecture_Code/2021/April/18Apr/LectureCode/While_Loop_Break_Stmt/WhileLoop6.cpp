#include<iostream>
int main(){
	int i=1;
	int sum=0;
	while(i<=100){
		if(i%5==0)
			sum=sum+i;
	i++;
	}
	std::cout<<"Sum="<<sum<<std::endl;
	return 0;
}
