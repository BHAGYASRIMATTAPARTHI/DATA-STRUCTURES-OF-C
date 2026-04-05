#include<stdio.h>
struct student
{
	char name[10];
	int rollno;
	float per;
};
int main ()
{
	struct student s[100];
	int n,i;
	float per;
	printf("enter n value ::");
	scanf("%d",&n);
	printf("enter student details \n");
	for(i=0;i<n;i++)
	{
		printf("enter student name::");
		scanf("%s",&s[i].name);
		printf("enter student rollno::");
		scanf("%d",&s[i].rollno);
		printf("enter student per::");
		scanf("%f",&per);
		s[i].per = per ;
	}
	printf("display student details\n");
	for(i=0;i<n;i++)
	{
	    printf("\n %d %s %f",s.rollno,s.name,s.per);
		printf("\n");
	}
	return 0;
}
