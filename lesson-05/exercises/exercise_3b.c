/*
Lesson: 05
Filename: exercise_3b.c
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
	
	i=0;
	
	while(i<=M)
	{
		j=0;
		while(j<=N)
		{
			printf("X");
			j++;
		}
		printf("\n");
		i++;
	}

   return 0;
}
