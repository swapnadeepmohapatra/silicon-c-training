// WAP to find roots of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main()
{
    int valueA, valueB, valueC;
    float root1, root2;

    printf("Enter Value of a : ");
    scanf("%d", &valueA);

    printf("Enter Value of b : ");
    scanf("%d", &valueB);

    printf("Enter Value of c : ");
    scanf("%d", &valueC);

    root1 = (-valueB + sqrt(valueB * valueB - 4 * valueA * valueC)) / (2 * valueA);
    root2 = (-valueB - sqrt(valueB * valueB - 4 * valueA * valueC)) / (2 * valueA);

    printf("The first Root is: %f\n The second Root is: %f", root1, root2);
    return 0;
}