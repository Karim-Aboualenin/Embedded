
#include <stdio.h>
#include <stdlib.h>

void main(void)
 {	
 int num;
 printf("enter an intger to check if it's odd or even: ");
 fflush(stdin);fflush(stdout);
 scanf("%d",&num);
 if (num%2 == 0)
	 printf("%d is even",num);
 else
	 printf("%d is odd",num);
}
