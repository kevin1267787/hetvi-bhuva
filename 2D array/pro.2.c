#include<stdio.h>

int main(){
	
	int a[] = {10,20,30,40,50};
	int b[] = {10,20,30,40,50};
	
	
	
	printf("%d size of array\n",sizeof(a)/sizeof(a[0]));
	
	printf("%d size of array",sizeof(b)/sizeof(b[0]));
	
	return 0;
}

