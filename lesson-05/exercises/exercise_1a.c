/*
Lesson: 05
Filename: exercise_1a.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int i,sum,x;
	sum=0;
	
	for(i=1; i<=3; i++)
	{
		printf("\nEisagete ton %d-o arithmo: ",i);
		scanf("%d",&x);
		sum=sum+x;
	}
	
	printf("\n\n%d",sum);
   
	return 0;
}
