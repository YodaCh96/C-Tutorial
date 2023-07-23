/*
Lesson: 04
Filename: exercise_7.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int etos;
	
	printf("Eisagete etos: ");
	scanf("%d", &etos);

	if (etos%4==0)
	{
		if (etos%100==0 && etos%400==0)
		{
			printf("Den einai disekto!");
		}
		else
		{
			printf("Einai disekto!");
		}
	}
	else
	{
		printf("Den einai disekto!");
	}
	
	return 0;
}
