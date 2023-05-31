#include<stdio.h>

int main(){
	
	int a;
	
	printf("Enter value of a:");
	scanf("%d",&a);
	if(a>0){
		printf("your value is positive");
	}
	
	else if (a<0){
		printf("your value is negative");
		
	}
	
	else{
		printf("your value is neutral");
	}
	
	return 0;
}
