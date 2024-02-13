#include <stdio.h>
#include <stdlib.h>

void main(void)
{	
	char operator;
	float a,b, result;
	printf("Enter operator either +,-,*or/: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	switch(operator)
	{
		case('+'):
		{
			result = a+b;
			printf("%f %c %f = %f",a,operator,b,result);
		}
		break;
		case('-'):
		{
			result = a-b;
			printf("%f %c %f = %f",a,operator,b,result);
		}
		break;
		case('*'):
		{
			result = a*b;
			printf("%f %c %f = %f",a,operator,b,result);
		}
		break;
		case('/'):
		{
			result = a/b;
			printf("%f %c %f = %f",a,operator,b,result);
		}
		break;
		default:
		printf("wrong operator");
		break;
	}
}