/*
Lesson: 04
Filename: exercise_1b.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int age;
	
	printf("Dwse tin ilikia sou: ");
	scanf("%d",&age);
	
	if (age<18)
		printf("Eisai Anilikos!");
	else if (18<=age && age<=65)
		printf("Eisai enilikos!");
	else // age>65
		printf("Eisai sintaksiouxos!");
	
	return 0;
}
