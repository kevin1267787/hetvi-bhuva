#include<stdio.h>
#include<string.h>

int main(){
  
    char a[]={123456};
    int len;
   
   len=strlen(a);
   if(len>=6){
   	printf("your pass is valid");
   }	
   else{
   	printf("your pass is invalid");
   }
	
	return 0;
}
