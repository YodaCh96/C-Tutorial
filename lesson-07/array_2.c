/*
Lesson: 07
Filename: array_2.c
Author: Ioannis Christodoulakis
Creation Date: 28.07.2023
*/

#include <stdio.h>

int main()
{
	int pin[3] = {1,3,4};
	int sum;
	
	sum=pin[0]+pin[1]+pin[2];
	
	printf("\n%d+%d+%d=%d",pin[0],pin[1],pin[2],sum);
	
	return 0;
}
