#include <stdio.h>
union student
{
    int rollno;
    char name[20];
    float per;
};
int main()
{
    union student s = {720, "bhagya", 98.9};
    printf("%d %s %f",s.rollno,s.name,s.per);
    return 0;
}
