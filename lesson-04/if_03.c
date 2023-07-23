/*
Lesson: 04
Filename: if_03.c
Author: Ioannis Christodoulakis
Creation Date: 22.07.2023
*/

#include <stdio.h>

int main()
{
	int x;
	int y;
	
	printf("Dwste ton akeraio x: ");
	scanf("%d",&x);
	printf("Dwste ton akeraio y: ");
	scanf("%d",&y);
	
	if(x<y)
		printf("Isxyei x<y");
	else if(x==y)
		printf("Isxyei x=y");
	else
		printf("Isxyei x>y");
	
	return 0;
}
