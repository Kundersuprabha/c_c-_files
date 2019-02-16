#include<stdio.h>
struct student
{     //int n;
	int rollno;
	char name[10];
	int age;
	int marks;
       //nt avg;

}s;
int main()
{
	int i,n;
	clrscr(); printf("Enter information of student\n");
	printf("Enter the num of students\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s[i].rollno=i+1;
		printf("For all roll number%d\n",s[i].rollno);
		printf("Enter the name\n");
		scanf("%s",s.name);
		printf("Enter the age\n");
		scanf("%d",&s.age);
		sum=marks1+marks2
		printf("Total=%d",sum);
		avg=(mark1+mark2)/2;
		printf("avg=%d\n",avg);
	}
	printf("Rollno\t name\t mark1\t mark2\t sum\t avg\n");
	for(i=0;i<n;i++)
	{
	      printf("%d\t %s\t %d\t %d\t%d\t%d",s[i].rollno,s[i].name,s[i].mark1,s[i].mark2,s[i].sum,s[i].avg);
	}
	getch();
	return 0;
}