/*
Lesson: 05
Filename: exercise_6.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

#define SIZE 5

int main()
{
	int pinakas[SIZE];
	int i;
	int prod;
	
	/* 1. Diavasma twn arithmwn */
	for (i=0; i<SIZE; i++)
	{
		do
		{
			printf("Eisagete ton %d-o arithmo: ", i+1);
			scanf("%d",&pinakas[i]);
		} while (pinakas[i]<1 || pinakas[i]>8);
	}
	
	/* Ypologismos tou ginomenou twn arithmwn */
	prod=1;
	for (i=0; i<SIZE; i++)
	{
		prod=prod*pinakas[i];
	}
	
	printf("To ginomeno twn arithmwn einai: %d", prod);
	
	return 0;
}
