/* Basic Format Specifiers */
#include <stdio.h>

int main()
{
    int myNum=5; // integer

    printf("%d\n",myNum);
    printf("%i\n",myNum);
    
    float myFloatNum=5.99; // Floating point number

    printf("%f\n",myFloatNum);
    
    double myDoubleNum=19.99; // Double (floating point number)

    printf("%lf\n",myDoubleNum);

    char myLetter='D'; // Character

    printf("%c\n",myLetter);
    
    char greetings[]="Hello World!"; // String

    printf("%s",greetings);

    return 0;
}
