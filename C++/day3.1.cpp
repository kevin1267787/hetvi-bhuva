#include<stdio.h>

int main(){
	
	float pi=3.1415,radius,perimeter,area;
	
	printf("entre the radius\n");
	scanf("%f" ,&radius);

    area=pi*radius*radius;
    perimeter=2*pi*radius;
    
    printf("area of circle is %f and perimotor is %f",area,perimeter);
    
return 0;	
}
