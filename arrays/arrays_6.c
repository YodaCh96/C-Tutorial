/* Change Elements in a 2D Array */
#include <stdio.h>

int main()
{
    int matrix[2][3]={{1,4,2},{3,6,8}};
    matrix[0][0]=9;

    printf("%d",matrix[0][0]); // Now outputs 9 instead of 1

    return 0;
}
