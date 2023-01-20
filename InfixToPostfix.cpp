#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char st[100];
char s[50] = "a+b*(c+d)/f+d*e";//a^b^c^d";//"a+b*(c^d-e)^(f+g*h)-i";
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

char peek()
{
	return st[top];
}  

bool isEmpty()
{
	return top==-1?1:0;
}

int isOperand(char ch)
{
	return (ch >= 'a' && ch <= 'z') ||
		(ch >= 'A' && ch <= 'Z');
}

int Prec(char ch)
{
	switch (ch)
	{
	case '+':
	case '-':
		return 1;

	case '*':
	case '/':
		return 2;

	case '^':
		return 3;
	}
	return -1;
}

int infixToPostfix(char* exp)
{
	int i, j;

	for (i = 0, j = 0; exp[i]; i++)
	{
		if (isOperand(exp[i]))
			exp[j++] = exp[i];
		
		else if (exp[i] == '(')
			push(exp[i]);
	
		else if (exp[i] == ')')
		{
			while (!isEmpty() && peek() != '(')    
				exp[j++] = pop();		
			pop();
		}
		else 
		{
			while (!isEmpty() && Prec(exp[i]) <= Prec(peek())){
				if(exp[i]=='^' && peek()=='^')
					break;
				else
				{
					exp[j++] = pop();	
				}
			}	
			push(exp[i]);
		}

	}

	while (!isEmpty())
		exp[j++] = pop();

	exp[j++] = '\0';
	printf( "%s", exp );
}

int main()
{
	infixToPostfix(s);
}
