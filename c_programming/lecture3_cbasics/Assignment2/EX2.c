
#include <stdio.h>
#include <stdlib.h>

void main(void)
 {	
 char c;
 printf("enter a character to check if it's vowel or not: ");
 fflush(stdin);fflush(stdout);
 scanf("%c",&c);
 if (c == 'a' || c == 'e'||c == 'i'||c == 'o'||c == 'u'||c == 'A' || c == 'E'||c == 'I'||c == 'O'||c == 'U')
	 printf("%c is vowel",c);
 else
	 printf("%c is consonant",c);
}