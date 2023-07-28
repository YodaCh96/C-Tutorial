/*
Lesson: 06
Filename: exercise_4.c
Author: Ioannis Christodoulakis
Creation Date: 27.07.2023
*/

#include <stdio.h>

int fibonacci(int n);

int main()
{
	int n;
	
	printf("Dwse ton arithmo: ");
	scanf("%d",&n);
	
	printf("O arithmos Fibonacci-%d einai %d", n, fibonacci(n));
	
	return 0;
}

int fibonacci(int n)
{
	if (n==1 || n==2)
		return 1;
	else 
		return fibonacci(n-1)+fibonacci(n-2);
}
