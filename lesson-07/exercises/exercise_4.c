/*
Lesson: 07
Filename: exercise_4.c
Author: Ioannis Christodoulakis
Creation Date: 29.07.2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int hidden;
	int x;
	
	/* 1. arxikopoiisi tou krymmenou arithmou */
	srand(time(NULL));
	hidden=1+rand()%100;
	
	/* 2.O xristis mantevei ton arithmo */
	do {
		
		printf("\n\nMantepse ton arithmo: ");
		scanf("%d", &x);
		
		if (x==hidden)
			printf("Mpravo! Ton mantepses swsta! ");
		else if (x>hidden)
			printf("Lathos! Prepei na valeis mikrotero!");
		else
			printf("Lathos! Prepei na valeis megalitero!");
		
	} while (x!=hidden);
	
	return 0;
}
