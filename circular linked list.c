#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start = NULL,*temp=NULL,*last=NULL,*t1,*t2;
void firstinsert()
{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\tEnter an element to store in node:");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	if(start==NULL)
	{
		start = temp;
		last = temp;
		temp->link=start;
	}
	else
	{
		temp->link=start;
		start=temp;
		last->link=temp;
	}
}
void lastinsert()
{
	int e;
		temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\tEnter an element to store in node:");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	if(start==NULL)
	{
		start = temp;
		last = temp;
		temp->link=start;
	}
	else
	{
		temp->link=last->link;
		last->link=temp;
		last=temp;
	}
}
void middleinsert()
{
	int e,pos,i=1;
		temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\tEnter an element to store in node:");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	printf("\n\t enter a position to insert");
	scanf("%d",&pos);
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		printf("\n inside of middle insert function");
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->link;
			i++;
		}
		temp->link=t2->link;
		t1->link=temp;
	}
}
void firstdelete()
{
	if(start == NULL)
	{
		printf("\n\t Linked List is empty,NO nodes to perform delete operation");
	}
	else
	{
		start=start->link;
		last->link=start;
		printf("\n\t First node is deleted sucessfully");
	}
}
void lastdelete()
{
	if(start==NULL)
	{
		printf("\n\t Linked List is empty,NO nodes to perform delete operation");
	}
	else
	{
		t1=start;
		while(t1->link!=last)
		{
			t2=t1;
			t1=t1->link;
		}
		t1->link=start;
		last=t1;
	}
}
void middledelete()
{
	int pos,i=1;
	printf("\n\t enter a position to delete a node");
	scanf("%d",&pos);
	if(start==NULL)
	{
			printf("\n\t Linked List is empty,NO nodes to perform delete operation");		
	}
	else
	{
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->link;
			i++;
		}
		t2->link=t1->link;
	}
}
void disp()
{
	if(start==NULL)
	{
		printf("\n\tNO Nodes in linked list");
	}
	else
	{
		printf("\n\t\t\t___linked list elements are___");
		temp=start;
		while(temp->link!=start)
		{
		  printf("%d",temp->data);
		  temp=temp->link;
		}
		printf("%d",temp->data);
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n\t\t____linked list operations____");
		printf("\n\t\t\t1.First Insert");
		printf("\n\t\t\t2.Last Insert");
		printf("\n\t\t\t3.Middle Insert");
		printf("\n\t\t\t4.First Delete");
		printf("\n\t\t\t5.Last Delete");
		printf("\n\t\t\t6.Middle Delete");
		printf("\n\t\t\t7.Display");
		printf("\n\t\t\t8.exit");
		printf("\n\t\tenter your choice...");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: firstinsert();
			           break;
			case 2: lastinsert();
			           break;  
		   	case 3: middleinsert();
			           break;
		 	case 4: firstdelete();
			           break; 
		   	case 5: lastdelete();
			           break;
		   	case 6: middledelete();
			           break; 
		   	case 7: disp();
			           break;
		  	case 8: exit(0);
		}
	}
	return 0;
}
