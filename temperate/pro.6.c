#include<stdio.h>

int main(){
	
	
	int n,i=1,f=1;
	
	printf("\n enter the number :");
	scanf("%d",&n);
	
	for(i<=n;f=f*i;i++){
		printf("\n the factorial of %d is %d",n,f);
	}
	
	return 0;
}

