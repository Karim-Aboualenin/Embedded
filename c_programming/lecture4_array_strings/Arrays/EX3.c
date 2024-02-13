#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i,j,row,column;
	float a[10][10],transpose[10][10];
	printf("Enter row and columns of the matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&row,&column);
	printf("Enter the elements of the the matrix\n");
	for (i=0;i<row;i++)
	{
		for(j = 0;j<column;j++)
		{
			printf("a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	for (i=0;i<column;i++)
	{
		for(j = 0;j<row;j++)
		{
			transpose[i][j] = a[j][i];
		}
	}
	printf("Entered matrix\n");
	for (i=0;i<row;i++)
	{
		for(j = 0;j<column;j++)
		{
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
	printf("transposed matrix\n");
	for (i=0;i<column;i++)
	{
		for(j = 0;j<row;j++)
		{
			printf("%f\t",transpose[i][j]);
		}
		printf("\n");
	}
}