/*
Lesson: 04
Filename: exercise_4.c
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

	if (x<y)
	{
		if (x<z)
		{
			if (y<z)
			{
				// x<y<z
				printf("H diataksi einai %d %d %d", x,y,z);	
			}
			else
			{
				// x<z<=y
				printf("H diataksi einai %d %d %d", x,z,y);	
			}
		}
		else // z<=x
		{
			// z<=x<y
			printf("H diataksi einai %d %d %d", z,x,y);	
		}
	}
	else // y<=x
	{
		if (y<z)
		{
			if (x<z)
			{
				// y<=x<z
				printf("H diataksi einai %d %d %d", y,x,z);		
			}
			else // z<=x
			{
				// y<z<=x
				printf("H diataksi einai %d %d %d", y,z,x);		
			}			
		}
		else // z<=y
		{
			// z<=y<=x
			printf("H diataksi einai %d %d %d", z,y,x);	
		}
	}
	
	return 0;
}
