#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();
	printf("Enter the value for a\n");
	scanf("%d",&a);
	printf("Enter the value for b\n");
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a=%d\t b=%d\n",a,b);
	getch();
}
