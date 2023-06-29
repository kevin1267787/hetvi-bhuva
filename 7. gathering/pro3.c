#include<stdio.h>

int len(char b[]){
	
	int i;
	for(i=0;b[i]!='\0';i++){
	}
	printf("Len :%d",i);
}

int main(){
	
	char a[5000];
	
	printf("Enter value :");
	scanf("%s",&a);
	
	len(a);
}
