/*
Lesson: 05
Filename: for.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int i,x,pro;
	
	/* Paradeigma 1 */
	for (i=1; i<=5; i++)
		printf("\nKalimera");
	
	/* Paradeigma 2 */
	for (i=1; i<=10; i++)
		printf("\n%d",i);
		
	/* Paradeigma 3 */
	printf("\n\n");
	pro=16;
	for (i=1; i<=10; i++)
	{
		x=i*pro;
		printf("\n%d*%d=%d",i,pro,x);
	}
	
	/* Paradeigma 4 */
	printf("\n\n");
	pro=7;
	for (i=10; i>=1; i--)
	{
		x=i*pro;
		printf("\n%d*%d=%d",i,pro,x);
	}

	return 0;	
}
