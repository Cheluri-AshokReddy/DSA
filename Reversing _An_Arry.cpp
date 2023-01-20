#include<stdio.h>
int reverse(int a[],int l,int h)
{
	int temp;
	if(l<=h)
	{
		temp=a[l];
		a[l]=a[h];
		a[h]=temp;
		reverse(a,l+1,h-1);
	}
}
int main()
{
	int a[]={ 9,8,7,6,5,4,3,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	printf("original arry\n");
	for(int i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	reverse(a,0,n-1);
  printf("\nrevers arry\n");
   for(int i=0;i<n;i++)
   {
   	printf("\n%d",a[i]);
   }
   return 0;
}
