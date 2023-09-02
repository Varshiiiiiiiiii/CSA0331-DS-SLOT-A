#include<stdio.h>
#define MAX_SIZE 100
int main()
{
	int a[MAX_SIZE];
	int i,size,pos;
	printf("Enter size of the array:");
	scanf("%d",&size);
	printf("Enter elements in the array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element position to delete:");
	scanf("%d",&pos);
	if(pos<0||pos>size)
	{
		printf("Invalid position!please enter position 1 to %d",size);
	}
	else
	{
		for(i=pos-1;i<size-1;i++)
		{
			a[i]=a[i+1];
		}
		size--;
		printf("\nElements of array after delete are:");
		for(i=0;i<size;i++)
		{
			printf("%d\t",a[i]);
		}
	}
	return 0;
}
