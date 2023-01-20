#include<stdio.h>

void selection_sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}
int main()

{
	int a[10]={8,7,6,5,4,3,2,1};
    selection_sort(a,8);
    printf("sorted arry is\n");
    
    for(int i=0;i<8;i++)
    {
    	printf("%d",a[i]);
	}
}
