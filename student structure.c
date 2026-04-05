#include<stdio.h>
#include<string.h>
struct student
{
	char name[10];
	long int roll_no;
	float per;
}s1={"bhagya",720,98.33},s2;
int main()
{
	struct student s3={"srivalli",613,98.32},s4;
	strcpy(s2.name,"naga");
	s2.roll_no = 902;
	s2.per = 97.33;
	printf("enter s4 name::");
	scanf("%s",&s4.name);
	printf("enter s4 roll_no::");
	scanf("%ld",&s4.roll_no);
	printf("enter s4 percentage::");
	scanf("%f",&s4.per);
	printf("%s %ld %f",s1.name,s1.roll_no,s1.per);
	printf("\n%s %ld %f",s2.name,s2.roll_no,s2.per);
	printf("\n%s %ld %f",s3.name,s3.roll_no,s3.per);
	printf("\n%s %ld %f",s4.name,s4.roll_no,s4.per);
	return 0;
}
