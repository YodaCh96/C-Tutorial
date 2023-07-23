/*
Lesson: 05
Filename: complex_for.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int i,j;
	
	for (i=0,j=0; i<5 && j<5; i++,j+=2)
		printf("\ni=%d,j=%d: ",i,j);

	return 0;
}
