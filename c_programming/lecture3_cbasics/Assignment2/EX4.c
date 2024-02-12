
#include <stdio.h>
#include <stdlib.h>

void main(void)
 {	
 float a;
 printf("enter a number to find out if it's positive or negative or zero: ");
 fflush(stdin);fflush(stdout);
 scanf("%f",&a);
 if (a == 0)
	 printf("%f is zero",a);
 else if(a > 0)
	 printf("%f is positive",a);
 else
	 printf("%f is negative",a);
}
