/*
Lesson: 04
Filename: exercise_3a.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int x,y,z;
	
	printf("Dwse ton 1o arithmo: ");
	scanf("%d", &x);
	
	printf("Dwse ton 2o arithmo: ");
	scanf("%d", &y);
	
	printf("Dwse ton 3o arithmo: ");
	scanf("%d", &z);	
	
	if (x>y)
	{
		if (x>z)
		{
			printf("O megaliteros einai to %d", x);
		}
		else // z>=x
		{
			printf("O megaliteros einai to %d", z);
		}
	}
	else // y>=x
	{
		if (y>z)
		{
			printf("O megaliteros einai to %d", y);
		}
		else // z>=y
		{
			printf("O megaliteros einai to %d", z);
		}
	}
	
	return 0;
}
