#include<iostream>
#include<stdio.h>
using namespace std;
class cal
{
	public:
		int a=10;
		int b=5;
		
};
class add:public cal
{
	public:
	int sum;
	sum=a+b;	
};
class sub:public cal
{
	public:
	int subt;
	subt=a-b;	
};
class mul:public cal
{
	public:
	int mult;
	mult=a*b;	
};
int main()
{
	add s;
	sub b;
	mul m;
	//cout<<"a:\t"<<"b:\n";
	//cin>>b;
	cout<<s.sum<<"\t"<<b.subt<<"\t"<<m.mult<<"\n";
	return 0;
}
