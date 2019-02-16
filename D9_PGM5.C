#include<stdio.h>
#include<conio.h>
void main()
{
	int dd,mm,yy,count,n,day,month,year;
	clrscr();
	printf("Enter the date month and year\n");
	scanf("%d%d%d",&dd,&&mm,&&yy);
	year=yy-1900;
	year=year/4;
	year=year+yy-1990;
	switch(mm)
	{
		case 1 : month=1;
			break;
		case 2	:month=4;
			break;
		case 3 : month=4;
			break;
		case 4	:month=0;
			break;
		case 5 : month=2;
			break;
		case 6	: month=5;
			break;
		case 7 : month=0;
			break;
		case 8	:month=3;
			break;
		case 9 : month=6;
			break;
		case 10	:month=1;
			break;
		case 11 : month=4;
			break;
		case 12	: month=3;
			break;
	}

	year=year+month;
	year=year+dd;
	day=year%7;
	switch(day)
	{
		case 1:printf("\nDay:\tSaturday\n");
		break;
		case 2:printf("\nDay:\tSunday\n");
		break;
		case 3:printf("\nDay:\tMonday\n");
		break;
		case 4:printf("\nDay:\tTuesday\n");
		break;
		case 5:printf("\nDay:\tWednesday\n");
		break;
		case 6:printf("\nDay:\tThursday\n");
		break;
		case 7:printf("\nDay:\tFriday\n");
		break;
	}
	getch();
}
