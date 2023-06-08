#include<stdio.h>

int main(){
	
	int n,i,sum=0;
	
	printf("Enter a positive integer:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("sum=%d\n",sum);
	
	return 0;
}
