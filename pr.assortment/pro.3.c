#include<stdio.h>

int main(){
	
	int a[]={1,2,3,4,5};
	int length=sizeof(a)/sizeof(a[0]);
	int n=3,i;
	
	printf("Original array:\n");
	for(i=0;i<length;i++){
		printf("%d ",a[i]);
		
	}
	for(i=0;i<n;i++){
		int j,last;
		last=a[length-1];
		
	for(j=length-1;j>0;j--){
		a[j]=a[j-1];
	}
	a[0]=last;
	}
	printf("\n");
	printf("Array after right rotation:\n");
	for(i=0;i<length;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
