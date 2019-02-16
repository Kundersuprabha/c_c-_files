#include<stdio.h>
#include<stdarg.h>
void dynamic(int s,...)
{
	printf("%d",s);
}
int main()
{
	clrscr();
	dynamic(2,4,6,8);
	dynamic(3,6,9);
	getch();
	return 0;

}