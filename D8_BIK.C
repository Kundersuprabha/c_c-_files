#include<stdio.h>
#include<conio.h>
void main()
{
	int dist;
	float fuel,avg_cons;
	clrscr();
	printf("Total distance traveled\n");
	scanf("%d",&dist);
	printf("The amount of fuel used\n");
	scanf("%f",&fuel);
	avg_cons=dist*fuel;
	printf("The average consumtion of bike=%0.002f\n",avg_cons);
	getch();


}