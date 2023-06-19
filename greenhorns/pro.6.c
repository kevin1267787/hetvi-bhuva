#include<stdio.h>

int main(){
	
	int b_s,hra,da,ta,g_s;
	
	printf("Enter salary:");
	scanf("%d",&b_s);
	hra = (10.00/100)*b_s;
	da = (8.00/100)*b_s;
	ta = (5.00/100)*b_s;
	
	g_s = hra+da+ta;
	
	printf("g_s:%d",g_s);
	
	return 0;
}

