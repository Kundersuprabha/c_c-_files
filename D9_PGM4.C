#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[5],b[5],temp;
	int p,i;
	clrscr();
	puts("Enter the word\n");
	gets(a);
	p=strlen(a)-1;
	for(i=0;a[i]!='\0';i++)
	{
	      b[i]=a[p];
	      p--;
	}
	b[i]='\0';
	puts(b);
	getch();
}