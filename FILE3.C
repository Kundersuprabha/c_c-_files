#include<stdio.h>
#include<conio.h>
void main()
{
	FILE  *fs,*ft;
	char c;
	fs=fopen("file3.c","r");
	if(fs==NULL)
	{
		printf("Can't open\n");
		exit(0);
	}
	ft=fopen("file4.c","w");
	if(ft==NULL)
	{
		printf("Can't open target file\n");
		fclose(fs);
		exit(0);
	}
	while(1)
	{
		c=fgetc(fs);
		fgets(fs);
		if(c==EOF)
		break;
		else
		fputc(c,ft);
	}
	fclose(fs);
	fclose(ft);