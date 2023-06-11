#include<stdio.h>

int main(){
	
	int number;
	int n = 3000;
	number = 2000;
	
	
	do{
		
		if(number%4==0)
		printf("%d\n",number);
		
		number++;
	}
	while(number<=n);
	
	return 0;
}
