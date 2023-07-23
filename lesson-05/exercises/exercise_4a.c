/*
Lesson: 05
Filename: exercise_4a.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int N;
	int i,j;
	
	N=13;
	
	for(i=0; i<=N; i++)
	{
		for (j=i; j<=N; j++)
		{
			printf("X");
		}
		printf("\n");
	}
	
	return 0;
}
