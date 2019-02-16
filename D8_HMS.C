#include<stdio.h>
#include<conio.h>
void main()
{
	int integer,hours,min,seconds;
	clrscr();
	printf("Enter the value for integer\n");
	scanf("%d",&integer);
	hours=integer / 3600;
       //	min=(integer-(3600*hours))/60;
       //	seconds=(integer-(3600*hours)-(min*60));
	 min=(integer%3600)/60;
	 seconds=integer%60;
	printf("Hours:min:seconds=%d:%d:%d\n",hours,min,seconds);

	getch();


}