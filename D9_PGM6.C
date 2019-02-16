void main()
{
	int n,i;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=11;i++)
	{
		if(n%i==0)
		{
			printf("%d",i);
		}
	}
	getch();
}