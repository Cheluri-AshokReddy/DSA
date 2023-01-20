#include<stdio.h>
void bubble_sort(int a[],int n)
{
	int temp;
	for(int i=0;i<=n-1;i++)
	{
		int flag=0;
		for(int j=0;j<=n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
}
int main()
{
   int a[10]={8,7,6,5,4,3,2,1};
	bubble_sort(a,8);
	printf("sorted arry is\n");
	for(int i=0;i<8;i++)
	{
		printf("%d",a[i]);
	}
}
