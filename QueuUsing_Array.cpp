#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int queue[MAX];
int front=-1;
int rear =-1;
void enqueue()
 {
 	int item;
 	if(rear==MAX-1)
 	{
 		printf("queue is full\n");
	 }
	 else
	 {
	 	if(front==-1)
	 	{
	 		front=0;
		 }
		 else
		 {
		 	printf("insert element of the queue\n");
		 	scanf("%d",&item);
		 	rear=rear+1;
		 	queue[rear]=item;
		 }
	 }
 }
 void diqueue()
 {
 	if(front==-1||front>rear)
 	{
 		printf("queue is underflow\n");
	 }
	 else
	 {
	 	printf("\nthe deleted element is %d\n",queue[front]);
	 	front=front+1;
	 }
 }
void display()
 {
 	if(front==-1)
 	{
 		printf("queue is empty\n");
	 }
	 else
	 {
	 	printf("queue is\n");
	 	for(int i=front;i<=rear;i++)
	 	{
	 		printf("%d\n",queue[i]);
		 }
	 }
 }
 int main()
 {
 	int choice=1;
 	while(choice)
 	{
 		printf("---main-----\n");
 		printf("1.enqueue\n2.diqueue\n3.display\n4.exit\n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1:
 				enqueue();
 				break;
 			case 2:
 				diqueue();
 				break;
 			case 3:
 				display();
 				break;
 			case 4:
 				exit(0);
		 }
	 }
 }
