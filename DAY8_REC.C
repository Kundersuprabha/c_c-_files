#include<stdio.h>
#include<conio.h>
void main()
{
	int perimeter,area,h,w;
	clrscr();
	printf("Enter the value for height\n");
	scanf("%d",&h);
	printf("Enter the value for width\n");
	scanf("%d",&w);
	perimeter= 2*(h+w);
	area=h * w;
	printf("Perimeter of the rectangle is %d\n",perimeter);
	printf("Area of the circle is %d",area);
	getch();


}