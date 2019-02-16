#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,c;
	clrscr();
	printf("Enter the number \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=1;
		for(j=1;j<=i;j++)
		{
			printf("%d\t",c);
			c=c*(i-j)/j ;

		}
		printf("\n");
	}
       getch();
}
