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
	
	printf("Dose etos: ");
	scanf("%d",&etos);
	
	if(etos%4==0)
	{
		if(etos%100==0)
		{
			if(etos%400==0)
				printf("Einai disekto!\n");
			else
				printf("Den einai disekto!\n");
		}
		else 
			printf("Einai disekto!\n");
	}
	else 
	{
		printf("Den einai disekto!\n");
	}
	
	return 0;
}
