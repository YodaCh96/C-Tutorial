/*
Lesson: 04
Filename: exercise_3b.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int x,y,z;
	int max;

	printf("Dwse ton 1o arithmo: ");
	scanf("%d", &x);

	printf("Dwse ton 2o arithmo: ");
	scanf("%d", &y);

	printf("Dwse ton 3o arithmo: ");
	scanf("%d", &z);	

	max=x;

	if (y>max)
		max=y;
		
	if (z>max)
		max=z;

	printf("O megaliteros einai to %d", max);
	
	return 0;
}
