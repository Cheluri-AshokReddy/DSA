#include<stdio.h>

int fact(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{

int n;
printf("enter the number\n");
scanf("%d",&n);
printf("factorial of %d is %d\n",n,fact(n));
}
