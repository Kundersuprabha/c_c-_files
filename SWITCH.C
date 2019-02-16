//#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
void func();
void main()
{

	clrscr();
	func();

	getchar();
}
void func()
{
	char op;
		int n;
	char name[20],mail[20],addr1[20],addr2[20],c;
       //	l:
	printf("Enter your option\n");
	scanf("%d",&n);

	if(n<5)

	{
	switch(n)
	{


			case 1 :printf("Name\n");
					scanf("%s",name);
					break;
			case 2 :printf("Email\n");
					scanf("%s",mail);
					break;
			case 3 :printf("Address1\n");
					scanf("%s",addr1);
					break;
			case 4 :printf("Address2\n");
					scanf("%s",addr2);
					break;
			default :exit(0);
					break;


	}
   }
      else
	{
	printf("Press 'y' to continue and 'n' to exit\n");
	op=getche();
	getchar();
	if(op=='y'||op=='Y')
	{

		func();
	}

	  //	printf("Wrong option...try again\n");
	 // goto l;

	}


}
