#include<stdio.h>
void func();
void func()
{
	printf("helloworld\n");
}
void main()
{
	clrscr();
	printf("Adress of functon main is%d\n",main);
	printf("Adress of function func() is %d\n",func);
	getch();
}