#include<stdio.h> void increment(int x);
void main()
{
	int a=10;
	printf("a=%d\n",a);
	increment(a);
	printf("\n a=%d",a);
}
void increment(int x)
{
	x++;
}