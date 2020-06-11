// WAP to calculate the gross salary of an employee by giving basic salary. Also calculate DA (60%) HRA (15%), Conveyance (15%), Medical (10%). Gross salary = Basic + DA + Conveyance + Medical

#include <stdio.h>

int main()
{
    int basicSalary, grossSalary, da, hra, conveyance, medical;
    printf("Enter Basic Salary: ");
    scanf("%d", &basicSalary);

    da = basicSalary * 60 / 100;
    hra = basicSalary * 15 / 100;
    conveyance = basicSalary * 15 / 100;
    medical = basicSalary * 10 / 100;

    grossSalary = basicSalary + da + conveyance + medical;

    printf("Gross Salary is: %d", grossSalary);
    return 0;
}