// Enter two numbers and find the cube of the larger number (use ternary operator).

#include <stdio.h>

int main()
{
    int numberOne, numberTwo, cube;

    printf("Enter First Number: ");
    scanf("%d", &numberOne);

    printf("Enter Second Number: ");
    scanf("%d", &numberTwo);

    cube = (numberOne > numberTwo) ? (numberOne * numberOne * numberOne) : (numberTwo * numberTwo * numberTwo);

    printf("Cube of the larger number is: %d", cube);

    return 0;
}