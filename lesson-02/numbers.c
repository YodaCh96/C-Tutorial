/* numbers.c */
#include <stdio.h>

int main()
{
   int i,N,y;      

   printf("Eisagete enan akeraio arithmo: ");
   scanf("%d",&N);
   
   for (i=1; i<=N; i++)
   {
       y=i*i;
       printf("\n%d sto tetragono = %d",i,y);
   }
   
   printf("\n\nTelos Programmatos");
   
   return 0;
}

