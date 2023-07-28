/*
Lesson: 06
Filename: orismata.c
Author: Ioannis Christodoulakis
Creation Date: 27.07.2023
*/

#include <stdio.h>

int square(int x);

int main()
{
	int a=5;
	int b=10;
	int teta,tetb,sum;
	
	teta=square(a);
	tetb=square(b);
	sum=teta+tetb;
	printf("%d^2 + %d^2 = %d",a,b,sum);
   
   return 0;
}

int square(int x)
{
	int y;
	
	y=x*x;
	
	return y;
}
