/*
Lesson: 02
Filename: print.c
Author: Ioannis Christodoulakis
Creation Date: 22.07.2023
*/

#include <stdio.h>

int x;

void grammi();

int main()
{
	// Ektyposeis...
	grammi();
	printf("\nSe posa mathimata thelete na mathete tin C? ");
	scanf("%d", &x);
	grammi();
	
	printf("\nTha apaitithoun 20 mathimata!");
	grammi();
	printf("\nApantisate %d",x);
	grammi();
	
	return 0;
}

/* H synartisi ektiponei mia grammi */
void grammi()
{
	printf("\n===============================");
}
