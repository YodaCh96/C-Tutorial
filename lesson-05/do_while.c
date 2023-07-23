/*
Lesson: 05
Filename: do_while.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int i;
	
	i=5;
	
	do
	{
		i++;
		printf("\n%d",i);
	} while(i>3);

	return 0;	
}
