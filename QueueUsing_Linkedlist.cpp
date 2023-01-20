#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*front,*rear,*newnode,*temp;
void inqueue()
{
	int item;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter the element of the queue\n");
	scanf("%d",&item);
	newnode->data=item;
	newnode->next=NULL;
	if(front==NULL)
	{
		front=newnode;
	}
	else
	{
		rear->next=newnode;
	}
	rear=newnode;
}
void diqueue()
{
	if(front==NULL)
	{
		printf("\n no elements in queue\n");
	}
	else
	{
	
	if(front==rear)
	{
		front=rear=NULL;
	}
	else
	{
		printf("\nthe deleted element is: %d",front->data);
		front=front->next;
	}
}
}
void display()
{
	temp=front;
	if(front==NULL)
	{
		printf("\nqueue is empty\n");
	}
	else
	{
	    while(temp!=NULL)
	{
		printf("\n%d\n",temp->data);
		temp=temp->next;
	}
    }  
}

int main()
{
	int choice;
	while(choice!=4)
	 {
	 	printf("\n---------------------main-------------------\n");
	 	printf("choice your choice\n");
	 	printf("\n1.inqueue\n2.diqueue\n3.display\n4.exit\n");
	 	scanf("%d",&choice);
	 	switch(choice)
	 	{
	 		case 1:
	 		inqueue();
	 		break;
	 		case 2:
	 		diqueue();
	 		break;
	 		case 3:
	 		display();
	 		break;
	 		case 4:
	 		exit(0);
	 		break;	
		 }
	 }
}
