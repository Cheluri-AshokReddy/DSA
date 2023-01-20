#include<stdio.h>
int main ()
{
	int a[10],i,pos,item,n;
	printf("enter the size of the arry:__\n");
	scanf("%d",&n);
	printf("enter the elements to print:___\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",a[i]);
	}
	printf("\n\n\n");
	printf(" from which position you have to delete :__\n");
	scanf("%d",&pos);
	printf("which element have to delete:___\n");
	scanf("%d",&item);
	
	for(i=pos-1;i<n-1;i++)
	{
		a[i]=a[i+1];
		
	}
	n--;
	
	for (i=0;i<n;i++)	
	{
		printf("%d",a[i]);
	}
	
}
