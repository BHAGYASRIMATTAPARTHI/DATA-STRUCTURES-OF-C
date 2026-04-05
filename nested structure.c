#include<stdio.h>
struct address
{
	char street[10];
	char city[10];
	long int pcode;
};
struct student
{
	char name[50];
	int rollno;
	float per;
	struct address a;
};
int main()
{
	struct student s={"bhagya",720,98.8,{"Aditya","rjy",533165}};
	printf("%d %s %f %s %s %ld",s.rollno,s.name,s.per,s.a.street,s.a.city,s.a.pcode);
	return 0;
}
