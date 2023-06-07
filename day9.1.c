#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Enter A:");
	scanf("%d",&a);
	
	printf("Enter B:");
	scanf("%d",&b);
	
	printf("Enter C:");
	scanf("%d",&c);
	
	if(a>b){
		if(c>b){
			printf("B is min\n");
		}
		else{
			printf("C is min\n");
		}
		
}
	
	else{
		if(b>c){
			printf("C is min\n");
		}
		else{
			printf("B is min\n");
		}
		
	}
	
	return 0;
}
