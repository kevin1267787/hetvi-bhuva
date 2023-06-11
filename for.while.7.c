#include<stdio.h>

int main(){
	
	int number,n;
	
	n = 3000;
	
	
	for( number= 2000;number<=n;number++){
		if(number%4==0){
			printf("%d\n",number);
		}
	}
	
	return 0;
}
