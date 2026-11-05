/*

Program (31) -> Write a program to calculate the area of a triangle.

Solution (3): No Arguments, Returns a Value

*/

#include <stdio.h>

float areaTriangle()

{

float base, height;

printf("Enter base: ");

scanf("%f", &base);

printf("Enter height: ");

scanf("%f", &height);

return 0.5* base * height;
}

int main()
    {

float area;

area = areaTriangle();

printf("Area of Triangle = %f", area);

return 0;
    }
