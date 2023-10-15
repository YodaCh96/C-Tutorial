/* How Are Pointers Related to Arrays */
#include <stdio.h>

int main()
{
    int myNumbers[4]={25,50,75,100};

    // Get the memory address of the myNumbers array
    printf("%p\n",myNumbers);

    // Get the memory address of the first array element
    printf("%p\n",&myNumbers[0]);

    return 0;
}
