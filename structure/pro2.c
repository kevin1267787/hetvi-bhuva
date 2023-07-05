#include<stdio.h>
#include<string.h>

struct Employee{
	
	int emp_ID;
	char emp_name[20];
	int emp_age;
	char emp_role[20];
	char emp_city[20];
	char emp_experience[20];
	char emp_company_name[20];
};

int main(){
	
	struct Employee stu[5];
	int i;
	
	for(i=0;i<=1;i++){
		
		printf("Enter ID :");
		scanf("%d",&stu[i].emp_ID);
		
		printf("Enter name :");
		scanf("%s",&stu[i].emp_name);

        printf("Enter age :");
		scanf("%d",&stu[i].emp_age);
		
		printf("Enter role :");
		scanf("%s",&stu[i].emp_role);

        printf("Enter city :");
		scanf("%s",&stu[i].emp_city);

        printf("Enter experience :");
		scanf("%s",&stu[i].emp_experience);

        printf("Enter company_name :");
		scanf("%s",&stu[i].emp_company_name);


	}
	for(i=0;i<=1;i++){
		
		printf("%d\n",stu[i].emp_ID);
		printf("%s\n\n",stu[i].emp_name);
		printf("%d\n\n",stu[i].emp_age);
		printf("%s\n\n",stu[i].emp_role);
		printf("%s\n\n",stu[i].emp_city);
		printf("%s\n\n",stu[i].emp_experience);
		printf("%s\n\n",stu[i].emp_company_name);







	}
	
	return 0;
}
