/*
Lesson: 07
Filename: random.c
Author: Ioannis Christodoulakis
Creation Date: 28.07.2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x,i;
	
	srand(time(NULL));
	
	for (i=0; i<10; i++)
	{
		x=rand()%100;
		printf("\n%d",x);
	}
	
	return 0;
}
