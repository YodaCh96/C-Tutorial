/*
Lesson: 04
Filename: prakseis.c
Author: Ioannis Christodoulakis
Creation Date: 22.07.2023
*/

#include <stdio.h>

int main()
{
	int x,y,z;
	int telestis;
	
	printf("\nDwste ton 1o akeraio: ");
	scanf("%d",&x);
	printf("Dwste ton 2o akeraio: ");
	scanf("%d",&y);
	printf("Dwste ton telesti\n 0 gia +\n 1 gia -\n 2 gia *\n 3 gia /\n 4 gia %%");
	printf("\nEpilogi? ");
	scanf("%d",&telestis);

	if (telestis==0)
	{
		z=x+y;
		printf("%d+%d=%d",x,y,z);
	}
	else if (telestis==1)
	{
		z=x-y;
		printf("%d-%d=%d",x,y,z);
	}
	else if (telestis==2)
	{
		z=x*y;
		printf("%d*%d=%d",x,y,z);
	}
	else if (telestis==3)
	{
		z=x/y;
		printf("%d/%d=%d",x,y,z);
	}
	else if (telestis==4)
	{
		z=x%y;
		printf("%d%%%d=%d",x,y,z);
	}

   return 0;
}
