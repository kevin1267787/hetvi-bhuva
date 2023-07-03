#include<stdio.h>

int main(){
	
	int a [5];
	int *b [5];
	
	int i,n;
	
	printf("Enter size of array :");
	scanf("%d",&n);
	
	int c[n];
	
	for(i=0;i<n;i++){
		printf("Enter elements [%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=4;i++){
		b[i]=&a[i];
		printf("%u => %d\n",b[i],*b[i]);
		
	}
	return 0;
}
