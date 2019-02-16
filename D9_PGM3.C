#include<stdio.h>
#include<conio.h>
void main()
{
	int d,s1,s2,t1,t2;
	clrscr();
	printf("Enter the value for s1 and s2\n");
	scanf("%d%d",&s1,&s2);
	printf("Enter the value for t1 and t2\n");
	scanf("%d%d",&t1,&t2);
	d=((s1*s2) * (t1-t2)) / (s1-s2);
	printf("d=%d",d);
	getch();
}
