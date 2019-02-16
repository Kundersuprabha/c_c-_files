#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,first,last,mid,key,i,flag=0;
	clrscr();
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the array in sorted order\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the key value\n");
	scanf("%d",&key);
	first=0;
	last=n-1;
	if(first<=1)
	{
		mid=(first+last)/2;
		if(key==a[mid])
		{
			flag=1;

		}
		else if(key<a[mid])
		{
			last=mid-1;
		}
		else
		{
			first=mid+1;
		}
	}
	else if(flag==0)
	{
		printf("Key not found\n");
	}
	else
	{
		printf("Key %d found in %d location\n",key,mid);
	}
	getch();
}


