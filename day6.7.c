#include<stdio.h>

int main(){
	
	int x=5;
	int y=8;
	int z=6;
	int ans;
	
	ans = (x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
	
	printf("%d",ans);
	
	return 0;
}
