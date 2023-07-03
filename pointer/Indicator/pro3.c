#include<stdio.h>

int main(){
	
	int n;
	
	printf("enter size :");
	scanf("%d",&n);
	
	int a[n];
	int *b;
	int i;
	
	for(i=0;i<n;i++){
		
		printf("Enter value :");
		scanf(" %d",&a[i]);
	}
	int null;
	int y[n];
	int j=n-1;
	for(i=0;i<n;i++){
		
		null = a[i];
		a[i] = y[j];
		y[j] = null;
		j--;
	}
	for(j=0;j<n;j++){
		
		printf("%d\n",y[j]);
		
	}
	return 0;
}
