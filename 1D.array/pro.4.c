#include<stdio.h>

int main(){
	
	int a[50],b[50],c[50],i,n;
	
	printf("Enter the size of array :\t");
	scanf("%d",&n);
	
	printf("Enter %d elements in first array:\t",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
 printf("Enter the %d elements in second array:\t",n);
 for(i=0;i<n;i++){
 	scanf("%d",&b[i]);
 }
 
for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("sum of these two array is :\t");
	for(i=0;i<n;i++)
{
	printf("%d",c[i]);
}

	return 0;
}
