#include<stdio.h>
#include<conio.h>
void main()
{
	int n,arr1[100],arr2[100],i;
	clrscr();
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the  array values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		arr1[i]=arr2[i];
		printf("The array1 is\n");
		for(i=0;i<n;i++)
		{
			printf("%d\n",arr1[i]);
		}

      /*	printf("The array1 is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr1[i]);
	} */
	printf("The array2 is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr2[i]);
	}
	}
	getch();
}