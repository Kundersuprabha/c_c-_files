#include<stdio.h>
#include<conio.h>
void quickSorting(int arr[],int low,int high)
{
	int temp,left,right,x,k,i;
	if(low>=high)
	return;
	else
	{
		x=arr[low];
		right=low+1;
		left=high;
		while(right<=left)
		{
			while(arr[right]<x && right<=high)
			{
				right++;
			}
			while(arr[left]>x && left>low)
			{
				left--;
			}
			if(right<left)
			{
				temp=arr[right];
				arr[right]=arr[left];
				arr[left]=temp;
				right++;
				left--;
			}
		}
		arr[low]=arr[left];
		arr[left]=x;
		quickSorting(arr,low,left-1);
		quickSorting(arr,left+1,high);
	}
}
void main()
{
	int arr[100],i,j,n,l,r;
	clrscr();
	printf("\n enter the number of array values:");
	scanf("%d",&n);
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nBefore selection sort:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	l=0;
	r=n-1;
	quickSorting(arr,l,r);
	printf("\n After quick sort:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
}













