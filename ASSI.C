#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	int age;
	char addr[20];
	int mark;
       //	char str=a;

}s[3];
int main()
{
	int i=1,n;
	char str[10];
	clrscr();
	printf("Enter information of student\n");

	for(i=0;i<3;i++)
	{
	       //	s[i].rollno=i+1;
		printf("rollno:\t");
		scanf("%d",&s[i].rollno);

		printf("\nName:\t");
		scanf("%s",s[i].name);

		printf("\nAge :\t");
		scanf("%d",&s[i].age);

	      /*	printf("Enter the address\n");
		scanf("%s",s[i].addr);

		printf("Enter the mark\n");
		scanf("%d",&s[i].mark);     */
	 }
	 printf("Enter a name for search:\n");
	 scanf("%s",str);
	  for(i=0;i<3;i++)
	 {
	  // strcmp(str,s[i].name);
		 if(strcmp(str,s[i].name)==0)
		{

			printf("Name\t Rollno\t Age\n ");

			printf("%s\t %d\t %d\t\n",s[i].name,s[i].rollno,s[i].age);
		       break;
		}

		else

		printf("Not found\n");

	 }//s[i]='\0';
	getch();
	return 0;
}