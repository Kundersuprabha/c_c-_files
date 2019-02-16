#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[100],i,j,k;
	clrsr();
	printf("Enter the array value\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
       /*	printf("Enter your choice\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:*/ printf("Value to be inserted\n");
			scanf("%d",&k);
			for(i=0;i<100;i++)
			{
				if(k<a[i])
				{
					pos=i;
				}
			}
			for(i=0;i>=pos;i--)
			{
				a[i]=a[i-1];
				a[pos]=a;
			}
			printf("Exist array list\n");
			for(i=0;i<100;i++)
			{
				printf("%d",a[i]);
			}
			printf("Inserted array list\n");
			for(i=0;i<=100;i++)
			printf("%d",a[pos]);
		}
		getch();
	}
