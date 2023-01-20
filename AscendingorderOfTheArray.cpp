#include<stdio.h>
int main()
{
	int a[100];
	int i,temp,n,j;
	printf("entre the size of the array:___\n");
	scanf("%d",&n);
	printf("entre the elements of tha array:___\n\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{
			
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
		}
		
	}
	printf("after sorting the elements are:___\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n\n",a[i]);
	}
}
