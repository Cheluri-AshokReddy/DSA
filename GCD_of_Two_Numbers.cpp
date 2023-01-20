#include <stdio.h>
int gcd(int n1, int n2)
{
	if (n2 == 0)
	{
		return n1;	
	}
	else
	{
		if(n1<n2)
		{
			return gcd(n2,n1);
		}
		else
		{
			return gcd(n2, n1 % n2);	
		}
	}	
	
}
int main()
{
	int n1, n2;
	printf("enter two numbers: \n");
	scanf("%d%d",&n1,&n2);
	printf("GCD of %d and %d is %d ", n1, n2, gcd(n1, n2));
	return 0;
}

