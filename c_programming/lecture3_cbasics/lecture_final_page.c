/*
 ============================================================================
 Name        : lecture_final_page.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i = 0, j = 9;
	for (i = 0; i<= 9;i++)
	{
		for (j = 9;j>=i;j--)
		{
			printf("%d ",9-(j-i));
		}
		printf("\n");
	}
}
