/*
Lesson: 05
Filename: exercise_2.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int i,j;
	
	for(i=1; i<=4; i++)
	{
		for (j=1; j<=4; j++)
		{
			printf("\n%d+%d=%d",i,j,i+j);
		}
	}
   
   return 0;
}
