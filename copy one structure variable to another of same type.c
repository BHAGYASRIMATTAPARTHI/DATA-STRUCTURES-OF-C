#include<stdio.h>
struct student
{
	char name[10];
	int rollno;
	float per;
};
int main ()
{
	struct student s1={"bhagya",720,100.00},s2;
	printf("%s %d %f",s1.name,s1.rollno,s1.per);
	s2=s1;
	printf("\n%s %d %f",s2.name,s2.rollno,s2.per);
	return 0;
}
