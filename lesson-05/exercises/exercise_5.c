/*
Lesson: 05
Filename: exercise_5.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

#define SIZE 5

int main()
{
	int pinakas[SIZE];
	int i;
	int sum;
	
	/* 1. Diavasma twn arithmwn */
	for (i=0; i<SIZE; i++)
	{
		printf("Eisagete ton %d-o arithmo: ", i+1);
		scanf("%d",&pinakas[i]);
	}
	
	/* Ypologismos tou athroismatos twn arithmwn */
	sum=0;
	for (i=0; i<SIZE; i++)
	{
		sum=sum+pinakas[i];
	}

	printf("To athroisma twn arithmwn einai: %d", sum);
	
	return 0;
}
