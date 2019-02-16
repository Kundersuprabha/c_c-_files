#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void main()
{
      //	char str1[10],str2[10],str[10],str3[10];
	int n;
	 char str1[5],str3[5];
	clrscr();
	printf("Enter the str1\n");
	scanf("%s",str1);
      /*	strcpy(str2,str1);
	printf("str2=%s\n",str1);

	strncpy(str,str1,3);
	str[3]='\0';
	printf("str=%s\n",str);

	printf("string length=%d\n",strlen(str1));     */

	printf("Enter the string3\n");
	scanf("%s",str3);
       /*	strcat(str1,str3);
	printf("%s\n",str1);

	strncat(str1,str3,4);
	printf("%s\n",str1); */

	n=strcmp(str1,str3);
	if(n==0)
		printf(" %d and %d equal\n");
	else
		printf("not equal\n",n);

     //  strrev(str3);
      // printf("%s\n",str3);

	getch();




}
