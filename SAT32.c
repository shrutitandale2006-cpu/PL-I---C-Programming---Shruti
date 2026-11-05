/*

Program (32) -> Write a program to calculate the area of a triangle.

Solution (4): Arguments, Returns a Value

*/

#include <stdio.h>

float areaTriangle(float base, float height)

{

return 0.5* base * height;

}

int main()

{

float base, height, area;

printf("Enter base: ");

scanf("%f", &base);

printf("Enter height: ");

scanf("%f", &height);

area = areaTriangle(base, height);

printf("Area of Triangle = %f", area);

return 0;
}
