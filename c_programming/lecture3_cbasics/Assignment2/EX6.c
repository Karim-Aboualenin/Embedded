#include <stdio.h>
#include <stdlib.h>

void main(void)
 {	
 int num, sum = 0, i;
 printf("enter an integer: ");
 fflush(stdin);fflush(stdout);
 scanf("%d",&num);
 for(i = 1; i <= num;i++)
	 sum += i;
	 printf("sum = %d",sum);
}
