#include<stdio.h>
int main()
{
	int a[100];
	int i,n,x,pos;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Input array elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter the new element to be insert:");
	scanf("%d",&x);
	printf("Enter the position where element is to be inserted:");
	scanf("%d",&pos);
	n=n+1;
	for(i=n-1;i>=pos;i--)
	a[i]=a[i-1];
	a[pos-1]=x;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
