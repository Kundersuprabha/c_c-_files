#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char c;
	fp=fopen("file1.c","r");
	if(fp==NULL)
	{
		printf("Can't open the file\n");
		exit(0);
	}
	while(1)
	{
		c=fgetc(fp);
		if(c==EOF)
		break;
		   printf("%c",c);

		}
		fclose(fp);

	   getch();		}
//                       getch()