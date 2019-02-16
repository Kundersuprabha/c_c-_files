#include<stdio.h>
void demo();
int main()
{
	void demo();
	void (*fun)();
	fun=demo;
	clrscr();
	(*fun)();
	fun();
	getch();
	return 0;
}
void demo()
{
	printf("Great ");
}
