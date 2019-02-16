#include<stdio.h>
int main()
{
	char str1[150];
	char *pt;
	int ctrV,ctrC,element; clrscr();
	printf("Count the number of vowels and consonants\n");
	printf("Input a string \n");
	fgets(str1,sizeof(str1),stdin);
	pt=str1;
	ctrV=ctrC=0;
	if(*pt!='\0')
	{
		if(*pt=='A'||*pt=='E'||*pt=='I'||*pt=='O'||*pt=='U'||*pt=='a'||*pt=='e'||*pt=='i'||*pt=='o'||*pt=='u')
		{
			ctrV++;
			pt++;
		}
		else
		{
			ctrC++;
			pt++;
		}

	}
	else
	{
		printf("vowel count=%d\t consonats=%d\n",ctrV,ctrC);
	}
	getch();
	return 0;
}