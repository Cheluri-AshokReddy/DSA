#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*head,*newNode,*ptr,*ptr1;


void insertion()
{
	int item,choice;
	ptr = head;
	newNode = (struct Node *)malloc(sizeof(struct Node));
	printf("enter the value to be inserted:\n");
	scanf("%d",&item);
	newNode->data = item;
	
	if(head == NULL)
	{
		newNode->next = NULL;
		head = newNode;
	}
	else
	{
		printf("choose the place where a node need to be inserted:\n");
		printf("1.start \n 2.middle \n 3.end\n");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			newNode->next = head;
			head = newNode;
		}
		if(choice==2)
		{
				int pos;
				printf("enter value for position:\n");
				scanf("%d",&pos);
			
			for(int i=1;i<pos-1;i++)
			{
				ptr = ptr->next;
			}
			newNode->next = ptr->next;
			ptr->next = newNode;
		}
		if(choice==3)
		{
			while(ptr->next!=NULL)
			{
				ptr = ptr->next;
			}
			newNode->next = NULL;
			ptr->next = newNode;
		}
	}
	printf("element %d is inserted.....\n",item);
}

void deletion()
{
	int choice;
	
	ptr = head;
	if(head == NULL)
	{
		printf("list is empty");
	}
	else
	{
		printf("\nenter the place where a node need to be deleted\n");
		printf("1.start \n 2.middle \n 3.end\n");
		scanf("%d",&choice);
		
		if(choice == 1)
		{
			printf("element deleted is: %d\n",ptr->data);
			head = head->next;
			free(ptr);
		}
		if(choice == 2)
		{
			int pos;
			printf("enter value for position:\n");
			scanf("%d",&pos);
			
			for(int i=1;i<pos;i++)
			{
				ptr1 = ptr;
				ptr = ptr->next;
			}
			printf("element deleted is: %d\n",ptr->data);
			ptr1->next = ptr->next;
			free(ptr);
		}
		if(choice == 3)
		{
			while(ptr->next!=NULL)
			{
				ptr1 = ptr;
				ptr = ptr->next;
			}
			printf("element deleted is: %d\n",ptr->data);
			ptr1->next = NULL;
			free(ptr);
		}
	}
}

void display()
{
	ptr = head;
	if(head==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		printf("the elements are: \n");
		while(ptr!=NULL)
		{
	 		printf("%d ",ptr->data);
			ptr = ptr->next;
		}	
	}
	printf("\n");
}

int main()
{
	int choice=1;
	
	while(choice)
	{
		printf("enter your choice:\n");
		printf("1.Insertion\n2.Deletion\n3.display\n4.Exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				insertion();
				break;
			case 2:
				deletion();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("enter a valid choice\n");
		}
	}
}

