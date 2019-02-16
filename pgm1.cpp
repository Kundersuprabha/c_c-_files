
#include<iostream>
#include<limits>
using namespace std;
int main()
{
	int a;
	unsigned int b;
	short int c;
	unsigned short int d;
	long int e;
	unsigned long int f;
	char g;
	unsigned char h;
	float i;
	double j;
	long double k;
	cout<<"a:"<<sizeof(a)<<endl;
	cout<<"b:"<<sizeof(b)<<endl;
	cout<<"c:"<<sizeof(c)<<endl;
	cout<<"d:"<<sizeof(d)<<endl;
	cout<<"e:"<<sizeof(e)<<endl;
	cout<<"f:"<<sizeof(f)<<endl;
	cout<<"g:"<<sizeof(g)<<endl;
	cout<<"h:"<<sizeof(h)<<endl;
	cout<<"i:"<<sizeof(i)<<endl;
	cout<<"j:"<<sizeof(j)<<endl;
	cout<<"k:"<<sizeof(k)<<endl;
	cout<<"Range of int:"<<INT_MIN<<"\t"<<INT_MAX<<endl;
	cout<<"Range of unsigned integer :0 \t"<<UINT_MAX<<endl;
	cout<<"Range of short"<<SHRT_MIN<<"\t"<<SHRT_MAX<<endl;		
	cout<<"Range of unsigned short :0 \t"<<USHRT_MAX<<endl;
	
	return 0;
}
