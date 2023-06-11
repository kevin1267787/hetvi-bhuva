#include<stdio.h>

int main(){
	
	int n, i=1,f=1;
	
	printf("\n Enter the number :");
	scanf("%d",&n);
	
	do{
	
		f=f*i;
		i++;
		
	}  while(i<=n);
	
	printf("\n the factorial of %d is %d",n,f);
	
	return 0;
}
