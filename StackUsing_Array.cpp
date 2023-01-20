#include <stdio.h>   
int stack[100];
int i,j;
int choice=0;
int n,top=-1;  

void push ()  
{  
    int val;      
    if (top == n )   
    printf("\n Overflow\n");   
    else   
    {  
        printf("\nEnter the value?\n");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;   
    }   
}   
  
void pop ()   
{   
    if(top == -1)   
    printf("Underflow\n");  
    else  
    top = top -1;   
}   
void show()  
{  
     
    if(top == -1)   
    {  
        printf("Stack is empty\n");  
    }  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    } 
} 
int  main ()  
{  
      
    printf("\nEnter the number of elements in the stack\n ");   
    scanf("%d",&n);  
    printf("\n---------Stack operations using array--------\n");  
  
    while(choice != 4)  
    {  
        printf("Chose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
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
            show();  
            break;  
             
            case 4:   
            {  
                printf("\nExiting....\n");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        }  
    }  
}   
   
