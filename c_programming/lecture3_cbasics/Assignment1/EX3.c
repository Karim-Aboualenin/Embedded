/*
 ============================================================================
 Name        : EX3.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int x = 0, y =0, sum =0;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&x,&y);
	sum = x+y;
	printf("sum: %d",sum);
}
