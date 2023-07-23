/*
Lesson: 05
Filename: exercise_3a.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int M,N;
	int i,j;
	
	M=10; 
	N=20;
	
	for(i=0; i<=M; i++)
	{
		for (j=0; j<=N; j++)
		{
			printf("X");
		}
		printf("\n");
	}
   
   return 0;
}
