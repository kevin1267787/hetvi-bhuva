#include<stdio.h>

int main(){

   int n,i;
   
   printf("Enter size of array :");
   scanf("%d",&n);
   
   int a[n];
   
   for(i=0;i<n;i++){
   	printf("Enter elements [%d]:",i);
   	scanf("%d",&a[i]);
   }
   
   for(i=0;i<n;i++){
   	if(a[i]<0){
   		printf("negtive value :%d\t",a[i]);
	   }
   	
   	
   }
	
	
	return 0;
}
