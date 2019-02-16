#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	FILE  *fs;
	char c[50];
	int len;
	fs=fopen("strwrite.txt","w");
	if(fs==NULL)
	{
		printf("Cant open\n");
		exit(0);
	}
	
	printf("Enter some string\n");
      //	fgets(c,49,fs);
	while(strlen(gets(c))>0)
	{
		fputs(c,fs);
		fputs("\n",fs);

	}
	fclose(fs);
	getch();
return 0;
}
