# Silicon Summer C Programming

## Assignment (Day-1)

### -Swapnadeep Mohapatra

> 1. WAP to enter the two sides of a rectangle and calculate the radius of the circle whose area is same as the rectangle.

```c

#include <stdio.h>
#include <math.h>

int main()
{
    int length, breadth, area;
    float radius;

    printf("Enter Length of Rectangle: ");
    scanf("%d", &length);

    printf("Enter Breadth of Rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    radius = sqrt(area / 3.14);

    printf("Radius of the circle is: %f", radius);

    return 0;
}
```

> 2. WAP to calculate the gross salary of an employee by giving basic salary. Also calculate DA (60%) HRA (15%), Conveyance (15%), Medical (10%). Gross salary = Basic + DA + Conveyance + Medical

```c
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
```

> 3. Enter two numbers and find the cube of the larger number (use ternary operator).

```c
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
```

> 4. Enter a 3-digit number and calculate the sum of digits.

```c
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
```

> 5. Enter the Principal amount, Time (in days) and Rate of Interest, then calculate the simple interest earned and the total amount payable.

```c
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
```

> 6. WAP to find roots of a quadratic equation.

```c
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
```

> 7. WAP to find the smallest between three numbers using conditional operator. (In one line)

```c
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
```

> 8. WAP to convert Fahrenheit to Celsius

```c
#include <stdio.h>

int main()
{
    float tempInCelsius, tempInFahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &tempInFahrenheit);

    tempInCelsius = (tempInFahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius is: %.2f", tempInCelsius);

    return 0;
}
```

### -Swapnadeep Mohapatra
