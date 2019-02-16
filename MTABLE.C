#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,c;
	clrscr();
	printf("Enter the value for n\n");
	scanf("%d",&n);
	printf("Enter the value for c\n");
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
	       printf("%d * %d = %d\n",n,i,n*i);
	}
      //	printf("%d * %d = %d\n",n,i,c);
	getch();
}