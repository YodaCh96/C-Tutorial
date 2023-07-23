/*
Lesson: 05
Filename: exercise_1c.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int i,prod,x;
	prod=1;
	
	for(i=0; i<3; i++)
	{
		printf("\nEisagete ton %d-o arithmo: ",i+1);
	  	scanf("%d",&x);
		prod=prod*x;
	}

	printf("\n\nTo ginomeno twn arithmwn einai: %d",prod);

	return 0;
}

