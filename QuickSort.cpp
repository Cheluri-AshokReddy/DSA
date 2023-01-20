#include<stdio.h>
int partition(int a[],int l, int h)
{
	int i;
	int pivot=a[l];
	int start=l;
	int end=h;
	int temp;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
		
	}
	temp=a[l];
	a[l]=a[end];
	a[end]=temp;
	return end;
}
void quick_sort(int a[],int l,int h)
{
	if(l<h)
	{
		int location =partition(a,l,h);
		quick_sort(a,l,location-1);
		quick_sort(a,location+1,h);
	}
}
int main()
{
	int a[]={9,8,7,6,5,4,3};
	quick_sort(a,0,6);
	printf("sorted arry is\n");
	for(int i=0;i<7;i++)
	{
		printf("%d",a[i]);
	}
}
