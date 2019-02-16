#include<stdio.h>
#include<conio.h>
int main()
{
	FILE  *fs;
	char c='y';
	struct emp
	{
		char name[25];
		int age,sal;
		
	};
	struct emp e;
	fs=fopen("emprec.DAT","r");
	if(fs==NULL)
	{
		printf("Can't open\n");
		exit(0);
	}
	while(!=EOF)
	{
		//printf("Enter name age and sal\n");
		fscanf(fs,"%s %d %d",e.name,&e.age,&e.sal)
		printf("\n%s %d %d",e.name,e.age,e.sal);
		//printf("\nAdd another record (y/n)");
		//c=getche();
		
	}
	fclose(fs);
}
