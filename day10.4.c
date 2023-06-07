#include<stdio.h>

int main(){
	
	int a,b,c,d,e;
	
	printf("Enter a:");
	scanf("%d",&a);
	
	printf("Enter b:");
	scanf("%d",&b);
	
    printf("Enter c:");
	scanf("%d",&c);
	
	printf("Enter d:");
	scanf("%d",&d);
	
	printf("Enter e:");
	scanf("%d",&e);
	
	
	a>b?
		a>c?
			a>d?
				a>e?
					printf("A is max")
				:
				
					printf("E is max")
				:
			
			
				d>e?
					printf("D is max")
				:
				
					printf("E is max")
				:
			c>d?
				c>e?
					printf("C is max")
				:
					printf("E is max")
				:
				d>e?
					printf("D is max")
				:
					printf("E is max")
				:
		b>c?
		b>d?
				b>e?
					printf("D is max")
				:
				
					printf("E is max")
					
					:
				d>e?
					printf("D is max")
					
					:
					printf("E is max")
	         
	         :
			c>d?
				c>e?
					printf("C is max")
				:
					printf("D is max")
		:
				d>e?
					printf("D is max")
		:
					printf("E is max");
				
			
		
	
				
						 
					
					
	
	return 0;
}
