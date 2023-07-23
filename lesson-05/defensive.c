/*
Lesson: 05
Filename: defensive.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int i;
	
	do
	{
		printf("Dwste enan akeraio apo 1 ews 100: ");
	  	scanf("%d",&i);
	} while (i<1 || i>100);

	printf("Eisagate arithmo mesa sta oria 1 ews 100: %d",i);

	return 0;
}
