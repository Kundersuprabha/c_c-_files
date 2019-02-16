#include<stdio.h>
#include<conio.h>
void main()
{
	float w1,w2,n1,n2,avg;
	clrscr()
	printf("Enter the two items weight\n ");
	scanf("%f%f",&w1,&w2);
	printf("Enter the number of purchase of two items");
	scanf("%f%f",&n1,&n2);
	avg=((w1*n1)+(w2*n2))/(n1+n2);
	printf("THe average value of the item is %f\n",avg)
}
