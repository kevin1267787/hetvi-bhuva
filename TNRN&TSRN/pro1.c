#include<stdio.h>

void sum(int i,int num){
	
	printf("Enter the last number:");
	scanf("%d",&num);
	
	printf("Numbers Divisible by 3 and 5 Between 0 to %d are: \n", num);
  for (i = 1; i <= num; i++){
    if (i % 3 == 0 && i % 5 == 0){
      printf("%d ", i);
    }
  }
}
int main(){
 
  sum(3,5);
  
  return 0;
}
