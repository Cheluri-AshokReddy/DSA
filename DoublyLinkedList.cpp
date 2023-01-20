#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head,*temp,*newnode,*temp1,*temp2;

void insert_begin()
{
    int item;
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("over flow");
    }
    else
    {
         printf("enter the element to be inserted\n");
        scanf("%d",&item);
    if(head==NULL)
    {
        newnode->next=NULL;
        newnode->prev=NULL;
        newnode->data=item;
        head=newnode;
    }
    else
    {

        newnode->data=item;
        newnode->next=head;
        head->prev=newnode;
        newnode->prev=NULL;
        head=newnode;
    }
  }
}
void insert_last()
{
    int item;
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("under flow");
    }
    else
    {
        printf("\nenter the value to be printed\n");
        scanf("%d",&item);
        newnode->data=item;
        if(head==NULL)
        {
            newnode->next=NULL;
            newnode->prev=NULL;
            head=newnode;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            newnode->prev=temp;
            newnode->next=NULL;
            temp->next=newnode;
        }
    }
}
void inser_position()
{
    int item;
    int pos;
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        newnode->prev=NULL;
        newnode->next=NULL;
        newnode->data=item;
        head=newnode;
    }
    else
    {
        printf("\nenter the position \n");
        scanf("%d",&pos);
        printf("\n enter the element \n");
        scanf("%d",&item);
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newnode->data=item;
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
        temp->next->prev=newnode;
        printf("\n element is inserted\n");
    }
}
void deletion_begin()
{
    temp=head;
    if(head==NULL)
    {
        printf("\n no elements in the list\n");
    }
    else if(head->next==NULL)
    {
    	head=NULL;
        free(head);
    }
    else
    {
        head=temp->next;
        head->prev=NULL;
        free(temp);
    }
}
void deletion_last()
{
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp1=temp->prev;
	temp1->next=NULL;
	free(temp);
}
void deletion_pos()
{
	temp=head;
	int pos;
	if(head==NULL)
	{
		printf("\n underflow\n");
	}
	printf("\n enter the position \n");
	scanf("%d",&pos);
	for(int i=1;i<pos;i++)
	{
		temp=temp->next;
	}
	temp1=temp->prev;
	temp2=temp->next;
	temp1->next=temp->next;
	temp2->prev=temp->prev;
	printf("\n deleted item is %d\n",temp->data);
	free(temp);
}
 void display()
 {
     temp=head;
     if(head==NULL)
     {
         printf("empty list\n");
     }
     else
     {
         printf("elements are\n");
         while(temp!=NULL)
         {
             printf("%d\n",temp->data);
             temp=temp->next;
         }
     }
     printf("elements are displayed\n");
 }
 
int main()
{
    int choice=1;
    while(choice)
    {
        printf("\n choice your choice");
        printf("\n 1.inser_begin\n2.insert_last\n3.display\n4.inser_position\n 5.deletion_begin \n6.deletion_last\n7.deletion_pos\n8.exit\n ");
       scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
	            insert_begin();
            break;
            case 2:
            insert_last();
            break;
            case 3:
            display();
            break;
            case 4:
            inser_position();
            break;
            case 5:
            deletion_begin();
            break;
            case 6:
            deletion_last();
            break;
            case 7:
            deletion_pos();
            break;
            case 8:
            exit(0);
            break;
            
            
        }
    }
    
}
