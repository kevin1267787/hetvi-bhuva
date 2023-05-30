#include<stdio.h>

int main(){
	
	int x = 10;
	int y = 46;
	int ans;
	
	ans = (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
	
	printf("%d",ans);
	
	return 0;
}
