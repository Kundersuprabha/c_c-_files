#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	int age;
	int mark;


}s;
int main()
{
	int i,n;
	clrscr();
	printf("Enter information of student\n");

	printf("Enter the roll number \n",s.rollno);
	scanf("%d",&s.rollno);

	printf("Enter the name\n");
	scanf("%s",s.name);
	printf("Enter the age\n");
	scanf("%d",&s.age);
	printf("Enter the mark of the student\n");
	scanf("%d",&s.mark);
	printf("Name\t Rollno\t Age\t Marks\n");
	printf("%s\t %d\t %d\t %d\n",s.name,s.rollno,s.age,s.mark);

      //	printf("%d\t %d\t %d\t %d\n",sizeof(s.name),sizeof(s.rollno),sizeof(s.age),sizeof(s.mark));
	printf("%d\n",sizeof(s));
	getch();
	return 0;
}
