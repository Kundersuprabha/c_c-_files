#include<stdio.h>
#include<conio.h>
#include<LIMITS.H>
#include<values.h>
#include<float.h>
#include<math.h>
void main()
{
	int a=-2;
	unsigned int b=10;
	short int c=-100;
	unsigned short int d=500;
	long int e=90;
	unsigned long int f=32456;
	char g='a';
	unsigned char h='H';
	float i=5.4;
	double j=231;
	long double k=30;
	clrscr();
	printf("%9d\t %0.5u\t %0.02f\t %0.2u\n ",a,b,c,d);
	printf("%0.2ld\t %0.02lu\n",e,f);
	printf("%0.02c\t%c\n",g,h);
       //	fflush(stdin);
	printf("%2.2f\n",i);
       //	printf("%2f\n",i);
	printf("%0.02lf\t%0.02Lf\n",j,k);
	printf("The size ofint %d\n",sizeof(a));
	printf("The size of unsigned int %d\n",sizeof(b));
	printf("The size of short %d\n",sizeof(c));
	printf("The size of unsigned short %d\n",sizeof(d));
	printf("The size of long int  %d\n",sizeof(e));
	printf("The size of unsiged long int %d\n",sizeof(f));
	printf("The size of char %d\n",sizeof(g));
	printf("The size of the unsigned char %d\n",sizeof(h));
	printf("The size of the float %d\n",sizeof(i));
	printf("The size of the double %d\n",sizeof(j));
	printf("The size of the long double %d\n",sizeof(k));

	printf("The range of integer %d to %d\n",INT_MIN,INT_MAX);
	printf("The range of unsigned integer 0 to %d\n",UINT_MAX);

	printf("The range of short %d to %d\n",SHRT_MIN,SHRT_MAX);
	printf("The range of unsigned short 0 to %d\n",USHRT_MAX);

	printf("The range of long int %d to %d\n",LONG_MIN,LONG_MAX);
	printf("The range of unsigned long int 0 to %d\n",ULONG_MAX);

	printf("The range of char %d to %d\n",CHAR_MIN,CHAR_MAX);
	printf("The range of unsigned char %d to %d\n",CHAR_MIN,UCHAR_MAX);

	printf("The range of long int %d to %d\n",LONG_MIN,LONG_MAX);
	printf("The range of unsigned long int 0 to %d\n",ULONG_MAX);

	printf("The range of float %e to %e\n",FLT_MIN,FLT_MAX);

	printf("The range of double %e toe\n",DBL_MIN,DBL_MAX);
	getch();
}