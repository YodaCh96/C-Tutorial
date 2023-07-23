/*
Lesson: 05
Filename: exercise_4b.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int N;
	int i,j;
	
	N=3;
	
	i=0;
	do
	{
		j=i;
		do
		{
			printf("X");
			j++;
		} while(j<=N);
		printf("\n");
		i++;
	}
	while(i<=N);
	
	return 0;
}
