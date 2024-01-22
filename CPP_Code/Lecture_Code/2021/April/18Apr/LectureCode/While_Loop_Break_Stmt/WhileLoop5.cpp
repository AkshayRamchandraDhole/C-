#include<iostream>
int main(){
	int startNum=0;
	int endNum=0;
	int sum=0;
	std::cout<<"Enter Starting Num And Ending Num:"<<std::endl;
	std::cin>>startNum>>endNum;
	for(int i=startNum;i<=endNum;i++){
	sum=sum+i;
	}
	std::cout<<"Sum="<<sum<<std::endl;
	return 0;
}
