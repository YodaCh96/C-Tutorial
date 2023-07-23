/*
Lesson: 03
Filename: sizes.c
Author: Ioannis Christodoulakis
Creation Date: 22.07.2023
*/

#include <stdio.h>

int main()
{
	printf("\nTa bytes enos char einai: %d", sizeof(char));
	printf("\nTa bytes enos short einai: %d", sizeof(short));
	printf("\nTa bytes enos int einai: %d", sizeof(int));
	printf("\nTa bytes enos long einai: %d", sizeof(long));      
	
	printf("\nTa bytes enos unsigned short einai: %d", sizeof(unsigned short));
	printf("\nTa bytes enos unsigned int einai: %d", sizeof(unsigned int));
	printf("\nTa bytes enos unsigned long einai: %d", sizeof(unsigned long));      
	
	printf("\nTa bytes enos float einai: %d", sizeof(float));
	printf("\nTa bytes enos double einai: %d", sizeof(double));
	
	return 0;
}
