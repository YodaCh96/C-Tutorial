/*
Lesson: 04
Filename: exercise_3c.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int x;
	int max;
	
	printf("Dwse ton 1o arithmo: ");
	scanf("%d", &x);
	
	max=x;
	
	printf("Dwse ton 2o arithmo: ");
	scanf("%d", &x);
	
	if (x>max)
		max=x;	
	
	printf("Dwse ton 3o arithmo: ");
	scanf("%d", &x);	
	
	if (x>max)
		max=x;	
	
	printf("O megaliteros einai to %d", max);
	
	return 0;
}
