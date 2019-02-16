#include<stdio.h>
#include<conio.h>

void main()
{
	int c_id,ec,n ;
	float charge,surcharge,netamount;
	char c[10];
	clrscr();
	printf("Enter the customer id\n");
	scanf("%d",&c_id);
	printf("Enter the customer name\n");
	scanf("%c",c);
	printf("Enter the value for elictricity consumed\n");
	scanf("%d",ec);
	printf("The amount customer need to pay\n");
       //	if(
	if(ec<=199)
	{
		charge=ec*1.20;
	       //	printf("The amount charges %d",charge);
	}
	else if(ec>=200 && ec<400)
	{
		charge=ec*1.50;
	       //	printf("The amount charges %d",charge);
	}
	else if(ec>=400 && ec<600)
	{
		charge=ec*1.80;
	       //	printf("The amount charges %d",charge);
	}
	else
	{
		charge=ec*2.00;

	}
		printf("The amount charges %d\n",charge);
	if(charge>=400)
	{
		surcharge=((charge * 15) /100);
		printf("Surcharge=%f\n",surcharge);
	}
	else
	{
		printf("Charge=%f\n",charge);
	}
	netamount = charge+surcharge;
	printf("Netamount=%f",netamount);
	if(netamount>=100)
	{
		printf("Minimum value of bill is 100 \n charge=100\n");
	}
	getch();
}




