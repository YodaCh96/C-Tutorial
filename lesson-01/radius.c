/*
Lesson: 01
Filename: radius.c
Author: Ioannis Christodoulakis
Creation Date: 22.07.2023
*/

#include <stdio.h>

int radius, area;

int main()
{
	printf("Eisagete tin aktina: ");
	scanf("%d",&radius);
	area=(int)3.1415 * radius * radius;
	printf("\n\nTo emvadon einai: %d\n", area);

	return 0;
}
