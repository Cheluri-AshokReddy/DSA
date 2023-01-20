
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*top,*newNode,*ptr;

void push()
{
	int item;
	newNode = (struct Node *)malloc(sizeof(struct Node));
	printf("enter the value to be inserted:\n");
	scanf("%d",&item);
	newNode->data = item;
	
	if(top == NULL)
	{
		newNode->next = NULL;
	}
	else
	{
		newNode->next = top;
	}
	top = newNode;
	printf("element %d is inserted....\n",item);
}

void pop()
{
	ptr = top;
	if(top == NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("\ndeleted element is: %d",top->data);
		top = top->next;
	}
	free(ptr);
}

void display()
{
	ptr = top;
	
	if(ptr == NULL)
	{
		printf("stack is empty\n");
	}
	
	else
	{
		printf("\nthe elements are:\n");
		while(ptr!=NULL)
		{
			printf("%d ",ptr->data);
			ptr = ptr->next;
		}
	}
	printf("\n");
}

void count()
{
	int count = 0;
	ptr = top;
	if(ptr == NULL)
	{
		printf("stack is empty\n");
	}
	while(ptr!=NULL)
	{
		count++;
		ptr = ptr->next;
	}
	printf("\nnumber of elements in the stack is %d\n",count);
}

int main()
{
	int choice;
	
	while(true)
	{
		printf("enter choice:\n");
		printf("1.push\n2.pop\n3.display\n4.count\n5.exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				count();
				break;
			case 5:
				exit(0);
			default:
				printf("enter a valid choice..\n");
		}
		
	}
	
}

