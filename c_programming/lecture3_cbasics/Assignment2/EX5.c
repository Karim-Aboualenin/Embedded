#include <stdio.h>
#include <stdlib.h>

void main(void)
 {	
 char c;
 printf("enter a character to check if it's alphapet or not: ");
 fflush(stdin);fflush(stdout);
 scanf("%c",&c);
 if ((c >= 'a'&&c <= 'z')||(c >= 'A' && c <= 'Z'))
	 printf("%c is alphapet",c);
 else
	 printf("%c is in not alphapet",c);
}
