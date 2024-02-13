#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i,j;
	float a[2][2], b[2][2],sum[2][2];
	printf("Enter the elements of the 1st matrix\n");
	for (i=0;i<2;i++)
	{
		for(j = 0;j<2;j++)
		{
			printf("a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of the 1st matrix\n");
	for (i=0;i<2;i++)
	{
		for(j = 0;j<2;j++)
		{
			printf("b%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}
	for (i=0;i<2;i++)
	{
		for(j = 0;j<2;j++)
		{
			sum[i][j] = a[i][j]+b[i][j];
		}
	}
	for (i=0;i<2;i++)
	{
		for(j = 0;j<2;j++)
		{
			printf("%f\t",sum[i][j]);
		}
		printf("\n");
	}
}