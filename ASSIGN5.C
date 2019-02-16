#include<stdio.h>
struct complex
{
	float real;
	float imag;
}c;
struct complex add(struct complex n1,struct complex n2);
int main()
{
	struct	complex n1,n2,temp;
	printf("1st complex number\n");
	printf("Enter real and imaginary part\n");
	scanf("%f%f",&n1.real,&n1.imag);
	printf("2nd complex number\n");
	printf("Enter real and imaginary part\n");
	scanf("%f%f",&n2.real,&n2.imag);
	temp=add(n1,n2);
	printf("Sum=%1f+%1fi\n",temp.real,temp.imag);
	getch();
	return 0;
}
struct complex add(struct complex n1,struct complex n2)
{
	struct complex temp;
	temp.real=n1.real+n2.real;
	temp.imag=n1.imag+n2.imag;
	return(temp);
}