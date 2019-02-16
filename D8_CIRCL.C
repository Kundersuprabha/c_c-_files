#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.142
void main()
{
	float perimeter,area,r;
	clrscr();
	printf("Enter the value for radius\n");
	scanf("%f",&r);
	perimeter= 2 * PI * r;
	area=PI * r * r;
	printf("Perimeter of the rectangle is %f\n",perimeter);
	printf("Area of the circle is %f",area);
	getch();


}