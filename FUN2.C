#include<stdio.h>
int fun(int );
int main()
{
      // int *ptr;
      int	(*ptr)(int)=fun;
      clrscr();
      (*ptr)(3);

      getch();
	return 0;
}
int fun(int n)
{
	for(;n>0;n--)
	printf("Hello");
	return 0;
}