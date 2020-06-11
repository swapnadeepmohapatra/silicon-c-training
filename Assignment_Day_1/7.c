// WAP to find the smallest between three numbers using conditional operator. (In one line)

#include <stdio.h>

int main()
{
    int number1, number2, number3, smallestNumber;
    printf("Enter Number 1 : ");
    scanf("%d", &number1);

    printf("Enter Number 2 : ");
    scanf("%d", &number2);

    printf("Enter Number 3 : ");
    scanf("%d", &number3);

    smallestNumber = number1 < number2 ? (number1 > number3 ? number3 : number1) : (number2 > number3 ? number3 : number2);

    printf("The smallest number is : %d", smallestNumber);
    return 0;
}