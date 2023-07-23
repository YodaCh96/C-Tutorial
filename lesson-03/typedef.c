/*
Lesson: 03
Filename: typedef.c
Author: Ioannis Christodoulakis
Creation Date: 22.07.2023
*/

#include <stdio.h>

typedef int akeraios;

int main()
{
	akeraios x,y,z;
	
	printf("Dwste enan akeraio: ");
	scanf("%d",&x);
	printf("Dwste akomi enan akeraio: ");
	scanf("%d",&y);
	z=x+y;
	printf("To athroisma toys einai: %d", z);
	
	return 0;
}
