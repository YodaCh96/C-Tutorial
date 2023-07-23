/*
Lesson: 05
Filename: exercise_1b.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int i,sum,x;
	sum=0;

	for(i=0; i<10; i++)
	{
		printf("\nEisagete ton %d-o arithmo: ",i+1);
		scanf("%d",&x);
		sum=sum+x;
	}

	printf("\n\n%d",sum);

	return 0;
}
