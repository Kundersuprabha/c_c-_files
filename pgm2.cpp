#include<iostream>
#include<limits>
class stud
{
 	int n;
	 int i;
	 int avg;

};
int main()
{
	
	struct student
	{
		char name[20];
		float s1,s2,s3;
	}s;
	cout<<"Enter number of student\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"NAME:\t";
		cin>>s.name;
		cout<<"S1:\t";
		cin>>s.s1;
		cout<<"S2:\t";
		cin>>s.s2;
		cout<<"S3:\t";
		cin>>s.s3;
		avg=(s.s1+s.s2+s.s3)/3;
		cout<<"Avg:\t"<<avg;	
	}	
	
}
