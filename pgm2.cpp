#include<iostream>
class obj
{
	struct student
{
	char name[25];
	float s1,s2,s3;
}s;
}

int main()
{
	int i,n;
	cout<<"Enter the number of student\n";
	cin>>n;
	cout<<"Enter the name and marks\n";
	for(i=0;i<n;i++)
	cin>>s.name>>s.s1>>s.s2>>s.s3;
	
	cout<<"NAME\t"<<"SUB1\t"<<"SUB2\t"<<"SUB3\t"<<"AVG"	
}
