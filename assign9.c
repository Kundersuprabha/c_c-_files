#include<stdio.h>
void main()
{
	int i,k;
	char date[8];
	char j[1];

	struct em
	{
	int code;
	char name[20];
	char datej[8];
	};

	struct em e[5];

	for(i=0;i<5;i++)
{
printf("\nKey in code, name and date(ddmmyyy) of employment for %d) employee\n",i+1);
scanf("%d%s%s",&e[i].code,e[i].name,e[i].datej);
if(strlen(e[i].datej)!=8)
{
printf("\nYou keyed the date wrongly, key again");
i--;
continue;
}
}

while(1)
{
clrscr();
printf("\nEnter current date\n");
scanf("%s",date);


for(i=0;i<5;i++)
{
k=0;
k=funccheck(date,e[i].datej);

if(k==1)
printf("\nEmployee code= %d Employee name= %s has tenure more than or equal 3 years",e[i].code,e[i].name);
}

printf("\nKey q to quit or any other key to continue\n");
scanf("%s",j);

if(j[0]==113)
break;
}
}

funccheck(char *date,char *datej)
{
int a,a1,i,t;

for(i=7,t=1,a=0;i>3;i--,t*=10)
{
a=a+((*(date+i)-48)*t);
}

for(i=7,t=1,a1=0;i>3;i--,t*=10)
{
a1=a1+((*(datej+i)-48)*t);
}

if(a-a1>3)
return(1);
else if(a-a1<0)
return(0);

for(i=3,a=0,t=1;i>1;i--,t*=10)
{
a=a+((*(date+i)-48)*t);
}

for(i=3,a1=0,t=1;i>1;i--,t*=10)
{
a1=a1+((*(datej+i)-48)*t);
}

if(a-a1>0)
return(1);
else if(a-a1<0)
return(0);

for(i=1,a=0,t=1;i>=0;i--,t*=10)
{
a=a+((*(date+i)-48)*t);
}

for(i=1,a1=0,t=1;i>=0;i--,t*=10)
{
a1=a1+((*(datej+i)-48)*t);
}

if(a-a1>=0)
return(1);
else if(a-a1<0)
return(0);
}

