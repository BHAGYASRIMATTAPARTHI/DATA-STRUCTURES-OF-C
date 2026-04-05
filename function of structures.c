#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[20];
    float per;
};

void display(struct student s);

struct student s1 = {720, "bhagya", 98.8}, s2;

int main()
{
    struct student s3 = {613, "valli", 98.9};

    printf("Enter student 2 details: ");
    scanf("%d %19s %f", &s2.rollno, s2.name, &s2.per);

    display(s1);
    display(s2);
    display(s3);

    return 0;
}

void display(struct student s)
{
    printf("\n%d %s %.2f", s.rollno, s.name, s.per);
}

