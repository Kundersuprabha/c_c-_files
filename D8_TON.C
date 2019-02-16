#include<stdio.h>
#include<conio.h>
void main()
{       double ton,mt,kg,hg,dg,g,deg,cg,mg;
	clrscr();
	printf("Enter the ton value\n");
	scanf("%Lf",&ton);
	mt=(1.102 * ton);
	kg=(0.01 * ton);
	hg=(0.0001 * ton);
	dg=(0.00001 * ton);
	g=(0.000001 * ton);
	deg=(0.0000001 * ton);
	cg=(0.00000001 * ton);
	mg=(0.000000001 * ton);
	printf("mt=%Lf\t kg=%Lf\t hg=%Lf\t dg=%Lf\t g=%Lf\t deg=%Lf\t cg=%Lf\t mg=%Lf\n",mt,kg,hg,dg,g,deg,cg,mg);
	getch();

}
