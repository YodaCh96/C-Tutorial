/*
Lesson: 06
Filename: variables.c
Author: Ioannis Christodoulakis
Creation Date: 27.07.2023
*/

#include <stdio.h>

void f1();
void f2();

int x; /* Katholiki metavliti. Tin vlepoun oloi */

int main()
{
	int a=0; /*Topiki metabliti stin main */
	
	x=5;
	printf("main: a=%d,x=%d\n",a,x);
	
	f1();
	printf("main: a=%d,x=%d\n",a,x);
	
	f2();
	printf("main: a=%d,x=%d\n",a,x);

   return 0;
}

void f1()
{
	int a=2, x=0; /*Topikes metavlites tis f1 */
	/* Exoyme diplo onoma stin x. Epikratei to topiko onoma */
	printf("f1: a=%d,x=%d\n",a,x);
}

void f2()
{
	int a=8; /*Topikes metavlites tis f2 */
	x=7; /* Anaferetai stin katholiki x */
	printf("f2: a=%d,x=%d\n",a,x);
}
