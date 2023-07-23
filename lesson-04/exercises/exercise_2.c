/*
Lesson: 04
Filename: exercise_2.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int x,y;
	
	printf("Dwse ton 1o arithmo: ");
	scanf("%d", &x);
	
	printf("Dwse ton 2o arithmo: ");
	scanf("%d", &y);
	
	if (x>y)
		printf("O megaliteros einai o %d",x);
	else // y>=x
		printf("O megaliteros einai o %d",y);
	
	return 0;	
}
