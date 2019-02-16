#include<iostream>
#include<stdio.h>
using namespace std;
class company
{
	public:
		int pc;
		void func1()
		{
			if(pc>=70)
			{
				cout<<"good\n";
			}
			else
			{
				cout<<"bad\n";
			}
		}
};	
class dep:public company
{
	public:
	int worke,salary;
		//dep d1;
		void func()
		{
			cout<<"pc completion %\n";
			cin>>pc;
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
	e1.func1();
	cout<<"NAME\t"<<"WORKE\t"<<"SALARY\n";
	cout<<e1.name<<"\t"<<e1.worke<<"\t"<<e1.salary;
	cout<<e1.pc;
	return 0;
}
