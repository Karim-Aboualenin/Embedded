/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main(void) {
	float x = 0, y =0, product =0;
		printf("Enter two integers: ");
		fflush(stdin); fflush(stdout);
		scanf("%f %f",&x,&y);
		product = x*y;
		printf("product: %f",product);
}
