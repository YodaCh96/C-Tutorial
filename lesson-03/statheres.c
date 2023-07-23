/*
Lesson: 03
Filename: statheres.c
Author: Ioannis Christodoulakis
Creation Date: 22.07.2023
*/

#include <stdio.h> //1.grafoume ta arxeia kefalidas

#define N 100 //2.Grafoume odigies define statherwn

//3. Edw mporoume na orisoume katholikes metavlites

//4. Edw mporoume na orisoyme prwtotipa sinartisewn

int main()
{
	//5.1 Dilwsi statherwn kai metavlitwn tis main
	int i,sum;
	const int number=10;
	
	//5.2 entoles tis main
	
	sum=0;   
	for (i=number; i<=N; i++)
		sum=sum+i;
	
	printf("To athroisma twn arithmwn [%d..%d] einai %d",number,N,sum);
	
	return 0;
}

//6. Edw tha exoyme ta swmata twn sinartisewn
