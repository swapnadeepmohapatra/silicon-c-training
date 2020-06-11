// WAP to enter the two sides of a rectangle and calculate the radius of the circle whose area is same as the rectangle.

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