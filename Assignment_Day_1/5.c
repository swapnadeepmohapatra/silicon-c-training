// Enter the Principal amount, Time (in days) and Rate of Interest, then calculate the simple interest earned and the total amount payable.

#include <stdio.h>

int main()
{
    int principal, time, intrest, simpleIntrest, amount;

    printf("Enter Principal: ");
    scanf("%d", &principal);
    printf("Enter Time: ");
    scanf("%d", &time);
    printf("Enter Intrest: ");
    scanf("%d", &intrest);

    simpleIntrest = (principal * intrest * time) / 100;
    amount = principal + simpleIntrest;

    printf("Simple interest earned is : %d \n", simpleIntrest);
    printf("Total amount payable is : %d", amount);

    return 0;
}