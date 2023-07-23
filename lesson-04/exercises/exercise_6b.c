/*
Lesson: 04
Filename: exercise_6b.c
Author: Ioannis Christodoulakis
Creation Date: 23.07.2023
*/

#include <stdio.h>

int main()
{
	int zariA1, zariA2, zariB1, zariB2;
	int sum1,sum2;

	printf("Dwse to apotelesma toy 1ou zariou tou 1ou paikti: ");
	scanf("%d",&zariA1);

	printf("Dwse to apotelesma toy 2ou zariou tou 1ou paikti: ");
	scanf("%d",&zariA2);

	printf("Dwse to apotelesma toy 1ou zariou tou 2ou paikti: ");
	scanf("%d",&zariB1);

	printf("Dwse to apotelesma toy 2ou zariou tou 2ou paikti: ");
	scanf("%d",&zariB2);

	sum1=zariA1+zariA2;
	sum2=zariB1+zariB2;

	if (sum1>sum2)
	{
		printf("Nikise o 1os paiktis!");
	}
	else if (sum1<sum2)
	{
		printf("Nikise o 2os paiktis!");
	}
	else
	{
		printf("Isopalia!");
	}

	return 0;
}
