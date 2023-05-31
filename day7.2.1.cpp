#include<stdio.h>

int main(){
	
	int a = 50;
	int b = 60;
	int c;
	c = a;
	a = b;
	b = c;
	
	printf("A:%d\n",a);
	printf("B:%d\n",b);
	
	return 0;
}
