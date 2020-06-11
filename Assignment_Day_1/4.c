// Enter a 3-digit number and calculate the sum of digits.

#include <stdio.h>

int main()
{
    int number, sum;

    printf("Enter an number: ");
    scanf("%d", &number);

    sum = 0;

    while (!number == 0)
    {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of digits is %d", sum);

    return 0;
}