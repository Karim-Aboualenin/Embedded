
#include <stdio.h>
#include <stdlib.h>

void main(void)
 {	
 float a,b,c,largest;
 printf("enter 3 numbers to find out which is largest ");
 fflush(stdin);fflush(stdout);
 scanf("%f %f %f",&a,&b,&c);
 largest = a>b?a>c?a:c:b>c?b:c;
 printf("%f is the largest",largest);
}
