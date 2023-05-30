#include<stdio.h>

int main(){
	
	int x=4;
	int y=46;
	int z= 5;
	int ans;
	
	ans = (x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z)+(3*(z+x)));
	
	printf("%d",ans);
	
	return 0;
}
