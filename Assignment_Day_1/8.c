// WAP to convert Fahrenheit to Celsius

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