#include<stdio.h>

int main(){
	
	int a;
	int b;
	int c;
	int x,*y,*z;
	
	printf("Enter value :");
	scanf("%d",&a);
	
	printf("Enter value :");
	scanf("%d",&b);
	
	y = &a;
	z = &b;
	
	x = *y;
	*y = *z;
	*z = x;
	
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	
	
	
	
	
	return 0;
}
