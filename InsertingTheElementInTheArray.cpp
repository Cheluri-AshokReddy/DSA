#include<stdio.h>
int main()
{
	int a[100];
	int i,n,pos,x;
	printf("entre the size of the array:__\n");
	scanf("%d",&n);
	printf("entre th elements of the array:___\n");
	for(i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
		printf("%d\n",a[i]);
    }
	printf("\n entre the position where the elemet have to insert\n");
	scanf("%d",&pos);
	printf("entre the element have to insert\n");
	scanf("%d",&x);
	printf("print the elements before inserting\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	for(i=n;i>=pos;i--)
	a[i]=a[i-1];
	a[pos-1]=x;
	printf("\nafter sorting the elements are:");
	for(i=0;i<n;i++)
	{
	
	printf("\n%d",a[i]);
     }
}
