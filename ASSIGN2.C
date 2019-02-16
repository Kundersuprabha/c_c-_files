#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	int age;
	char addr[20];
	int mark;

}s[15];
int main()
{
	int i=1,n;
	clrscr();
	printf("Enter information of student\n");

	for(i=0;i<15;i++)
	{
		s[i].rollno=i+1;
		printf("Enter the roll number \n",s[i].rollno);
	       //	scanf("%d",&s[i].rollno);

		printf("Enter the name\n");
		scanf("%s",s[i].name);

		printf("Enter the age\n");
		scanf("%d",&s[i].age);

		printf("Enter the address\n");
		scanf("%s",s[i].addr);

		printf("Enter the mark\n");
		scanf("%d",&s[i].mark);
	 }
	 printf("Name\t Rollno\t Age\n Address\t Marks\n");
	 for(i=0;i<15;i++)
	{

		printf("%s\t %d\t %d\t %s\t %d\n \n",s[i].name,s[i].rollno,s[i].age,s[i].addr,s[i].mark);
       }
		printf("%d\n",sizeof(s[i]));

	getch();
	return 0;
}