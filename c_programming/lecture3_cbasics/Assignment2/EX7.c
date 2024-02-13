#include <stdio.h>
#include <stdlib.h>

void main(void)
 {	
 int num, factorial = 1, i;
 printf("enter an integer: ");
 fflush(stdin);fflush(stdout);
 scanf("%d",&num);
 if (num < 0)
	 printf("ERROR! there no factorial for negative number.");
else if (num == 0)
{
	factorial = 1;
	printf("factorial = %d",factorial);
}
else
{
	for(i = 1; i <= num;i++)
		factorial *= i;
	printf("factorial = %d",factorial);
}

}
