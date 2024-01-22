#include<iostream>
int main(){
	int marks = 55 ;
	if(marks > 80 )
			std::cout<<"FC"<<std::endl;
			
	else if(marks > 70 && marks < 80)
			
			std::cout<<"Modern"<<std::endl;
	else if(marks > 60 && marks < 70 )
			std::cout<<"Garware"<<std::endl;
	else
			std::cout<<"JayKranti"<<std::endl;

	std::cout<<"End of If"<<std::endl;		
	return 0;
}
