/*
Lesson: 04
Filename: sxesiakoi.c
Author: Ioannis Christodoulakis
Creation Date: 22.07.2023
*/

#include <stdio.h>

int main()
{
	int x=2;
	int y=1;
	int z;   
	printf("\nx=%d,y=%d",x,y);
	printf("\n=========",x,y);
	z=(x>y);
	printf("\nx>y:%d",z);

	z=(x>=y);
	printf("\nx>=y:%d",z);

	z=(x==y);
	printf("\nx==y:%d",z);  

	z=(x<=y);
	printf("\nx<=y:%d",z);

	z=(x<y);
	printf("\nx<y:%d",z);

	return 0;
} 
