#include<stdio.h>

int linearSearch(int a[], int n, int x)
{
	int i;

	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int a[5] = {1,2,3,4,5},x;
	printf("enter an element to search: \n");
	scanf("%d",&x);
	int n = sizeof(a)/sizeof(a[0]);
	int index = linearSearch(a,n,x);
		
	if(index != -1)
	{
		printf("element %d is found at index %d....",x,index);
	}
	else
	{
		printf("element not found....");
	}
}


