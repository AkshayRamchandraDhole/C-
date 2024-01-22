`:#include<iostream>
int main(){
	int i=1;
	while(i<=10){
	
		if(i%2==0){
			continue;
			//std::cout<<i<<std::endl;
		}else{
			//continue;
			std::cout<<i<<std::endl;
		}
	i++;
	}
	return 0;
}
