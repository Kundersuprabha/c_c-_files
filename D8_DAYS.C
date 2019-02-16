#include<stdio.h>
#include<conio.h>
void main()
{
	int no_days,years,weeks,day;
	clrscr();
	printf("Enter the no_days\n");
	scanf("%d",&no_days);
	years= no_days/365;
	weeks= (no_days%365)/7;
	day=(no_days%365)%7;
	printf(" years=%d\n months=%d\n days=%d\n",years,months,day);
	getch();
}