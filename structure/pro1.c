#include<stdio.h>
#include<string.h>

struct Student{
	
	int stu_ID;
	char stu_name[20];
	int stu_age;
	char stu_course[20];
	char stu_city[20];
	int stu_std;
	char stu_school[20];
};

int main(){
	
	struct Student stu[5];
	int i;
	
	for(i=0;i<=1;i++){
		
		printf("Enter ID :");
		scanf("%d",&stu[i].stu_ID);
		
		printf("Enter name :");
		scanf("%s",&stu[i].stu_name);

        printf("Enter age :");
		scanf("%d",&stu[i].stu_age);
		
		printf("Enter course :");
		scanf("%s",&stu[i].stu_course);

        printf("Enter city :");
		scanf("%s",&stu[i].stu_city);

        printf("Enter std :");
		scanf("%d",&stu[i].stu_std);

        printf("Enter school :");
		scanf("%s",&stu[i].stu_school);


	}
	for(i=0;i<=1;i++){
		
		printf("%d\n",stu[i].stu_ID);
		printf("%s\n\n",stu[i].stu_name);
		printf("%d\n\n",stu[i].stu_age);
		printf("%s\n\n",stu[i].stu_course);
		printf("%s\n\n",stu[i].stu_city);
		printf("%d\n\n",stu[i].stu_std);
		printf("%s\n\n",stu[i].stu_school);







	}
	
	return 0;
}
