#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],i,j,t,n;
	clrscr();
	printf("\n enter the number of array values:");
	scanf("%d",&n);
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nBefore bubble sort:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	printf("\nAfter bubble sort:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
}





