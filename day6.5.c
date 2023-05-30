#include<stdio.h>

int main(){
	
	int x = 6;
	int y = 8;
	int z = 5;
	int ans;
	
	ans = (x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));
	
	printf("%d",ans);
	
	return 0;

}
