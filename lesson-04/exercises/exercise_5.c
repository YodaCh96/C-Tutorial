/*
Lesson: 04
Filename: exercise_5.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int x;
	int hours, min, sec;
	
	printf("Eisagete plithos deuteroleptwn: ");
	scanf("%d", &x);
	
	hours=x/3600;
	
	x=x%3600;
	
	min=x/60;
	sec=x%60;
	
	printf("Wres: %d", hours);
	printf("\nLepta: %d",min);
	printf("\nDeuterolepta: %d",sec);
	
	return 0;
}
