#include<stdio.h>
struct date
{
	int d:6;
	int m:4;
	int y;
};
int main()
{
	struct date x={31,3,2008};
    printf("size of the structure=%lu",sizeof(struct date));
    printf("\n%d %d %d",x.d,x.m,x.y);
    return 0;
}
