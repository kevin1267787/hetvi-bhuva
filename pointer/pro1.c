#include<stdio.h>

int main(){
	
	int a=10;
	int *b;
	
	b=&a;
	printf("%u => %d\n",b,(*b)*(*b));
    printf("%d => %d\n",b,(*b)*(*b));
	
	return 0;
}
