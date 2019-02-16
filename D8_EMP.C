#include<stdio.h>
#include<conio.h>
void main()
{
	char empid[10];
	int a;
	double b,salary;
	clrscr();
	printf("Enter the employee's id\n");
	scanf("%s",&empid);
	printf("Enter the total work hours of month\n");
	scanf("%d",&a);
	printf("Enter the amount he receives per hour\n");
	scanf("%d",&b);
	salary=a * b;
	printf("Employee id=%s\t salary=%d",empid,salary);
	getch();


}