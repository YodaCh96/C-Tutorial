/*
Lesson: 04
Filename: if_02.c
Author: Ioannis Christodoulakis
Creation Date: 22.07.2023
*/

#include <stdio.h>

int main()
{
	int x;
	
	printf("Dwste enan akeraio: ");
	scanf("%d",&x);
	
	if(x%2==0)
		printf("O arithmos einai artios!");
	else
		printf("O arithmos einai perittos!");
	
	return 0;
}
