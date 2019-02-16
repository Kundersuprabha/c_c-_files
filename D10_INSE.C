#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],i,j,key,n;
	clrscr();
	printf("\n enter the number of array values:");
	scanf("%d",&n);
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nBefore insertion sort:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	printf("\n After insertion sort:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
}









