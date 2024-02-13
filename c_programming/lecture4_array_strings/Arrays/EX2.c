#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i,size;
	float data[6],sum,average;
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	for (i =0; i<size;i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&data[i]);
	}
	for (i =0; i<size;i++)
	{
		sum+=data[i];
	}
	average = sum/size;
	printf("Average = %f",average);
}