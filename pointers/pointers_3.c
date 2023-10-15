/* Dereference */
#include <stdio.h>

int main()
{
    int myAge=43; // Variable declaration
    int* ptr=&myAge; // Pointer declaration

    // Reference: Output the memory address of myAge with the pointer
    printf("%p\n",ptr);

    // Dereference: Output the value of myAge with the pointer (43)
    printf("%d\n",*ptr);

    return 0;
}
