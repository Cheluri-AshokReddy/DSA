#include<stdio.h>

int binarySearch(int a[],int l, int h, int key)
{
	int mid;
	if(l<=h)
	{
		mid=(l+h)/2;
		
		if(key==a[mid])
		{
			return mid;
		}
		else if(key<a[mid])
		{
			return binarySearch(a,l,mid-1,key);
		}
		else
		{
			return binarySearch(a,mid+1,h,key);
		}
	}
	return -1;
}

int main()
{
	int a[5]={1,2,3,4,5},x;
	printf("enter an element to search: \n");
	scanf("%d",&x);
	int n = sizeof(a)/sizeof(a[0]);
	int index = binarySearch(a,0,n-1,x);
		
	if(index != -1)
	{
		printf("element %d is found at index %d....",x,index);
	}
	else
	{
		printf("element not found....");
	}
}


