#include<stdio.h>
#include<string.h>

int main(){
	
	char email1[]="hetvi.bhuva6598@gmail.com";
	char email2[20];
	char password1[]="hetu";
	char password2[20];
	
	printf("enter your email2");
	scanf("%s",&email2);
	
	printf("enter your password");
	scanf("%s",&password2);
	
	int a=strcmp(email1,email2);
	int b=strcmp(password1,password2);
	
	if(a==0){
		printf("valid your email...!\n");
	}
	else{
		printf("invalid your email...!\n");
	}
	
	if(b==0){
		printf("valid your password...!\n");
		
	}
	else{
		printf("invalid your password...!\n");
	}
	return 0;
}
