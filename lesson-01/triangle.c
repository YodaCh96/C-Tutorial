/*
Lesson: 01
Filename: triangle.c
Author: Ioannis Christodoulakis
Creation Date: 22.07.2023
*/

#include <stdio.h>

int i,j;

int main()
{
	for (i=1; i<=20; i++)
	{
		for (j=1; j<=i; j++)
			printf("X");
		printf("\n");
	}

	return 0;
}
