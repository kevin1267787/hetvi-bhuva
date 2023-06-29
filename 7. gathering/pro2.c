#include<stdio.h>

sum(int hetvi[],int n){
	int c=0,i;
	
	for(i=0;i<n;i++){
		c+=hetvi[i];
	}
	printf("Sum :%d",c);
}

int main(){
	
	int n;
	
	printf("Enter value :");
	scanf("%d",&n);
	
	int arr[n],i;
	
	for(i=0;i<n;i++){
		printf("Enter value[%d]:",i);
		scanf("%d",&arr[i]);
	}
	sum(arr,n);
	
	return 0;
}
