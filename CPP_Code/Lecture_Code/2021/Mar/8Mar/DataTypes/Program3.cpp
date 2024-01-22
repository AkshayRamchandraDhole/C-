#include<iostream>
int main(){

	int  empId = 200 ;
	char teamName = 'A';
	double salary = 50000.70 ;
	float sal  = 999.00;
	//void sa = NULL ;
	

	std::cout<<"Int = "<<sizeof(int)<<std::endl;
	std::cout<<"Float = "<<sizeof(float)<<std::endl;
	std::cout<<"Double = "<<sizeof(double)<<std::endl;
	std::cout<<"Char = "<<sizeof(char)<<std::endl;
	std::cout<<"Void = "<<sizeof(void)<<std::endl;


	std::cout<<"EMPID Size = "<<sizeof(empId)<<std::endl;
	std::cout<<"TeamName Size = "<<sizeof(teamName)<<std::endl;
	std::cout<<"Salary Size = "<<sizeof(salary)<<std::endl;
	std::cout<<"Float Size = "<<sizeof(sal)<<std::endl;
	//std::cout<<"Void Size = "<<sizeof(sa)<<std::endl;
}
