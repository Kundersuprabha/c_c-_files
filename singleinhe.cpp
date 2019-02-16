#include<iostream>
#include<stdio.h>
using namespace std;
class dep
{
	public:
	int worke,salary;
		//dep d1;
		void func()
		{
			if(worke>=50)
				salary=salary+10000;
			else
				salary=salary-5000;
		}
};
class emp:public dep
{
	public:
		char name[20];
		
		void calc()
		{
		
			cout<<"NAME\t"<<"WORKE\t"<<"SALARY\n";
			cin>>name>>worke>>salary;
			//d1.func();
		}
		
};
int main()
{
	emp e1;
	e1.calc();
	e1.func();
	cout<<"NAME\t"<<"WORKE\t"<<"SALARY\n";
	cout<<e1.name<<"\t"<<e1.worke<<"\t"<<e1.salary;
	return 0;
}
