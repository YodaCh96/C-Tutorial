/*
Lesson: 04
Filename: monadiaioi.c
Author: Ioannis Christodoulakis
Creation Date: 22.07.2023
*/

#include <stdio.h>

int main()
{
	int x=1;
	int y=1;

	printf("%d,%d",x++,++y);
	printf("\n%d,%d",x++,++y);
	printf("\n%d,%d",x++,++y);
	printf("\n%d,%d",x,y);

	return 0;
}
