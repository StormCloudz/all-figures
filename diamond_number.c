#include <stdio.h>

void main()
{
	int i, j, k;
	for(i=0; i<5; i++)
	{
		printf("\n");
		for(j=6; j>i; j--)
		{
			printf(" ");
		}
		for(j=1; j<=i ; j++)
		{
			printf("%d", j);
		}
		if(i>1)
		{
			for(j=i;j>1;j--)
			{
				printf("%d",j-1);
			}
		}
		
	}

	for(i=3; i>0; i--)
	{
		printf("\n");
		for(j=6; j>i; j--)
		{
			printf(" ");
		}
		for(j=1; j<=i ; j++)
		{
			printf("%d", j);
		}
		
		if(i>1)
		{
			for(j=i;j>1;j--)
			{
				printf("%d",j-1);
			}
		}
	}
}
