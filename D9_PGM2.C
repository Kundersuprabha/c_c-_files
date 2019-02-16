#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,fact=1,count,j ;
	clrscr();
	printf("Enter the value for a\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of %d is %d\n",a,fact);
	while(a!=0)
	{
	   count=0;
	   for(j=5;a/j>1;i=i*5)
	   {
		count=count+a/j;
	   }
		printf("The number of zero's is %d\n",count);
	  }

	getch();
}
