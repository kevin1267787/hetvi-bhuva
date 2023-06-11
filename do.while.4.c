#include<stdio.h>

int main(){
	
	int i = 10;
	int n;
	
	printf("Enter value :");
	scanf("%d",&n);
	
	do{
		printf("%d\n",n);
		n--;
	}
	while(n>=1);
	return 0;
}
