#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char st[100];
char s[20] = "231*+9-";//"234*+82/-";
int top = -1,n = strlen(s);

void push (char item)  
{        
    if (top == n-1 )
	{
		printf("\n Overflow");   
	}   
    
    else   
    {           
        top = top + 1;   
        st[top] = item;   
	}   
}   
  
char pop ()   
{   
	char x;
	 
    if(top == -1)  
	{
		printf("Underflow");	
	}  
    else
	{
		x = st[top];
		top = top - 1;
		return x;  	
	}  
     
}   

bool isEmpty()
{
	return top==-1?1:0;
}

bool isdigit(char exp)
{
	if(exp >= 48 && exp <= 57)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int evaluatePostfix(char* exp)
{	
	for (int i = 0; exp[i]!='\0'; i++)
	{
		if (isdigit(exp[i]))
			push(exp[i] - '0');
			
		else
		{
			int val1 = pop();
			int val2 = pop();
			switch (exp[i])
			{
			case '+': push(val2 + val1); break;
			case '-': push(val2 - val1); break;
			case '*': push(val2 * val1); break;
			case '/': push(val2/val1); break;
			}
		}
	}
	return pop();
}

int main()
{
	printf("value = %d",evaluatePostfix(s));
}
