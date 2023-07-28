/*
Lesson: 06
Filename: factorial.c
Author: Ioannis Christodoulakis
Creation Date: 27.07.2023
*/

#include <stdio.h>

int factorial(int n);

int main()
{
	int x;
	int res;
	
	printf("Dwste ton fysiko: ");
	scanf("%d",&x);
	
	res=factorial(x);
	
	printf("%d!=%d",x,res);
	
	return 0;
}

int factorial(int n)
{
	int y; 
	
	if (n==1)
		return 1;
	else 
	{
		y=factorial(n-1);
		return n*y;
	}
}
