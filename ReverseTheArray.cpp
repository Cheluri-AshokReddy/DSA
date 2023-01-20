#include<stdio.h>

void reverse(int a[],int l,int h)
{
	int temp;
	
	if(l<=h)
	{
		temp = a[l];
		a[l] = a[h];
		a[h] = temp;	
	
		reverse(a,l+1,h-1);		
	}
}

int main()
{
	int a[] = {9,6,8,2,66,77,5,33,99,5,6,3,4,1,2};
	int n = sizeof(a)/sizeof(a[0]);
	printf("original array :  ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	reverse(a,0,n-1);
	printf("reverse array :  ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
