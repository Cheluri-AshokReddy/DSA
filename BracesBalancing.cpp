#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char st[100];
char s[20] = /*"{([a+b])([b+c])";*/"((a+b)(b+c))()";


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

bool isBalanced(char *s)
{
	
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='(')
		{
			push(s[i]);
		}
		else if(s[i]==')')
		{
			if(top==-1)
			{
				return 0;
			}
			pop();
		}
	}
	
	return isEmpty()?true:false;
}

bool isMatchingPair(char c1, char c2)
{
	if (c1 == '(' && c2 == ')')
        return 1;
    else if (c1 == '{' && c2 == '}')
        return 1;
    else if (c1 == '[' && c2 == ']')
        return 1;
    else
        return 0;
}

bool isBalanced2(char *s)
{

	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{
			push(s[i]);
		}
		else if(s[i]==')' || s[i]==']' || s[i]=='}')
		{
			if(top==-1)
			{
				return 0;
			}
			else if (!isMatchingPair(pop(), s[i]))
			{
				return 0;	
			}
		}
	}
	
	return isEmpty()?true:false;
}

int main()
{
	isBalanced2(s) ? printf("balanced"):printf("not balanced");
}
