#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char c;
	int L=0,T=0,C=0,S=0;
	clrscr();
	fp=fopen("file2.c","r");
	if(fp==NULL)
	{
		puts("Cant't open");
		exit(0);

	}
	while(c!=EOF)
	{
		c=fgetc(fp);
		if(c==EOF)
		break;
		C++;
		if(c=='\n')
		L++;
		if(c=='\t')
		T++;
		if(c==' ');
		S++;

	}
	fclose(fp);
	printf("No of char %d\n",C);
	printf("No of lines %d\n",L);
	printf("No of tabs %d\n",T);
	printf("No of spaces %d\n",S);
	getch();
}