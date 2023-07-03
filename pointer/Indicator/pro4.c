#include<stdio.h>

void length(char arr[100]){
	int p=0;
	
	int *m;
	int c;
	for(c=0;arr[c]!='\0';c++){
		m=&c;
	}
	printf("Length of string:%d",*m);
}
int main(){
	int i;
	char arr[100];
	printf("Enter Elements :");
	gets(arr);
	length(arr);

	
	
	return 0;
}
