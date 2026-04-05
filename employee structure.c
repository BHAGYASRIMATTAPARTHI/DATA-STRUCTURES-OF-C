#include<stdio.h>
#include<string.h>
struct employee
{
	char name[10];
	long int emp_no;
	long int salary;
}s1={"bhagya",720,300000},s2;
int main()
{
	struct employee s3={"srivalli",613,200000},s4;
	strcpy(s2.name,"naga");
	s2.emp_no = 902;
	s2.salary = 100000;
	printf("enter s4 name::");
	scanf("%s",&s4.name);
	printf("enter s4 emp_no::");
	scanf("%ld",&s4.emp_no);
	printf("enter s4 salary::");
	scanf("%ld",&s4.salary);
	printf("%s %ld %ld",s1.name,s1.emp_no,s1.salary);
	printf("\n%s %ld %ld",s2.name,s2.emp_no,s2.salary);
	printf("\n%s %ld %ld",s3.name,s3.emp_no,s3.salary);
	printf("\n%s %ld %ld",s4.name,s4.emp_no,s4.salary);
	return 0;
}
