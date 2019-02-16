#include<stdio.h>

int main()
{
	int i,n;
	float *element;
	printf("Pointer find the largest amount using dynamic memory allocation\n");
	printf("input total number of element(1 to 100 \n");
	scanf("%d",&n);
	element = (float*)calloc(n,sizeof(float));
	if(element==NULL)
	{
		printf("No memory is allocated\n");
	}
	else
	{
		printf("\n");
		i=0;
		if(i<n)
		{
			printf("Number %d \n",i+1);
			scanf("%f",&element+i);
			i++;
		}
		else if(i==1)
		{
			if(i<n)
			{
			      if(*element<*(element+i))
			      {
					*element=*element+1;
					i++;
			      }
			}
			else
			{
				printf("Largest element is %2f\n",element);
			}
		}
	}
	getch();
	return 0;
}