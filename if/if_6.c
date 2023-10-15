/* Short Hand If...Else (Ternary Operator) */
#include <stdio.h>

int main()
{
    int time=12;

    /*
    if(time<18)
    {
        printf("Good day.");
    }
    else
    {
        printf("Good evening.");
    }
    */

    (time<18)?printf("Good day."):printf("Good evening.");

    return 0;
}
