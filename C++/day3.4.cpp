#include<stdio.h>

int main(){
	
	float b,h,area;
	
	printf("Enter Heigth and Base of Triangle:");
	scanf("%f%f",&h , &b);
	
	area=(b*b)/2;
	printf("Area of Triangle is :%f\n",area);
	
	return 0;
}
