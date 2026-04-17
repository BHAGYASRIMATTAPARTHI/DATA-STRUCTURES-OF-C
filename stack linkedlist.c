#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct stack
{
	int data;
	struct stack *link; 
};
struct stack *top=NULL,*p,*temp,*temp1;
void push()
{
	int ele;
	printf("enter the element:");
	scanf("%d",&ele);
	p=(struct stack*)malloc(sizeof(struct stack));
	p->data=ele;
	p->link=NULL;
	if(top==NULL)
	{
		top=p;
	}
	else
	{
		p->link=top;
	}
	top=p;
}
void disp()
{
   int t;	
   temp=top;
   if(top==NULL)
   {
   	printf("\n there are no elements in the stack");
   }
   else
   {
   	printf("\n the stak elements are::");
   	while(temp!=NULL)
   	   {
   		t=temp->data;
   		printf("\t%d",t);
   		temp=temp->link;
   		temp1=temp;
	   }
   }
}
void pop()
{
	int t;
	if(top==NULL)
	{
		printf("there are no elements");
	}
	else
	{
		t=top->data;
		printf("\n the deleted element is %d",t);
		top=top->link;
	}
}
void main()
{
	int ch;
	while(1)
	{
		printf("\n\t\t STACK OPERATIONS ARE");
		printf("\n\n\t\t1.PUSH");
		printf("\n\n\t\t2.POP");
		printf("\n\n\t\t3.DISPLAY");
	    printf("\n\n\t\t4.EXIT");
	    printf("\n\t\tenter your choice...");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:push();
	    	   break;
	    	case 2:pop();
	    	   break;
	    	case 3:disp();
	    	   break;
	    	case 4:exit(0);
	    	default : printf("\nInvalid Choice,Try agin:");
		}
	}
}
