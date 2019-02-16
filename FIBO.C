#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,i,j,p;
	clrscr();
	printf("Enter the n vales\n");
	scanf("%d",&n);
	  i=0;
	  j=1;
	for(p=0;p<=n;p++)

		{
			sum=i+j;
			i=j;
			j=sum;
				printf("%d\t",sum);
		}
	       //	printf("%d\t",sum);
		getch();

}