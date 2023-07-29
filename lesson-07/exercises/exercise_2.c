/*
Lesson: 07
Filename: exercise_2.c
Author: Ioannis Christodoulakis
Creation Date: 29.07.2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
#define N 8

int main()
{
	int pinakas[M][N];
	int i,j;
	
	/* 1. Arxikopoiisi me tyxaious arithmous */
	srand(time(NULL));
	
	for (i=0; i<M; i++)
		for (j=0; j<N; j++)
			pinakas[i][j]=rand()%201;
			
	/* 2. Ektypwsi tou pinaka */
	for (i=0; i<M; i++)
	{
		for (j=0; j<N-1; j++)
			printf("%d\t",pinakas[i][j]);
		printf("%d",pinakas[i][N-1]);
		printf("\n");
	}
	
	return 0;

}
