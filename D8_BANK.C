#include<stdio.h>
#include<conio.h>
void main()
{
	int amount,a,b,c,d,e,f,g;
	clrscr();
	printf("Enter the amount\n");
	scanf("%d",&amount);
	a=amount/2000;
	b=(amount%2000)/500;
	c=((amount%2000)%500)/200;
	d=(((amount%2000)%500)%200)/100;
	e=((((amount%2000)%500)%200)%100)/50;
	f=(((((amount%2000)%500)%200)%100)%50)/20;
	g=((((((amount%2000)%500)%200)%100)%50)%20)/10;
	printf("The number of a=%d\t b=%d\t c=%d\t d=%d\t e=%d\t f=%d\t g=%d\n",a,b,c,d,e,f,g);
	getch();


}