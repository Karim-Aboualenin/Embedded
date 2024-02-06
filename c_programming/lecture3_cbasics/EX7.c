/*
 ============================================================================
 Name        : EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a = 0, b =0;
		printf("Enter value of a: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&a);
		printf("Enter value of b: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&b);
		a=a + b;
		b=a - b;
		a=a - b;
		printf("value of a: %f\n",a);
		printf("value of b: %f",b);
		return EXIT_SUCCESS;
}
