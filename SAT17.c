/*

Program (17) -> Write a program to accept elements of integer, float, and character arrays from the user and display the value and corresponding memory address of each array element.

Solution (1): Pre define values in the program + without any loop + Explicit way to write the program */

#include <stdio.h>

int main()

{

int var1[5];

float var2[5];

char var3[5];

var1[0] = 10;

var1[1] = 20;

var1[2] = 30;

var1[3] = 40;

var1[4] = 50;

printf("\nThe value of var1 of index O is %d ",var1[0]);

printf("and address is %d", &var1[0]);

printf("\nThe value of var1 of index 1 is %d ",var1[1]);

printf("and address is %d",&var1[1]);

printf("\nThe value of var1 of index 2 is %d ",var1[2]);

printf("and address is %d",&var1[2]);

printf("\nThe value of var1 of index 3 is %d ",var1[3]);

printf("and address is %d",&var1[3]);

printf("\nThe value of var1 of index 4 is %d ",var1[4]);

printf("and address is %d\n\n",&var1[4]);

var2[0] = 1.1;

var2[1] = 2.2;

var2[2] = 3.3;

var2[3] = 4.4;

var2[4] = 5.5;

printf("\n The value of var2 of index O is %f ",var2[0]);

printf("and address is %d", &var2[0]);

printf("\nThe value of var2 of index 1 is %f ",var2[1]);

printf("and address is %d", &var2[1]);

printf("\nThe value of var2 of index 2 is %f ",var2[2]);

printf("and address is %d",&var2[2]);

printf("\nThe value of var2 of index 3 is %f", var2[3]);

printf("and address is %d",&var2[3]);

printf("\nThe value of var2 of index 4 is %f ",var2[4]);

printf("and address is %d\n\n",&var2[4]);

var3[0] = 'A';

var3[1] = 'B';

var3[2] = 'C';

var3[3] = 'D';

var3[4] = 'E';

printf("\nThe value of var3 of index O is %c ",var3[0]);

printf("and address is %d", &var3[0]);

printf("\nThe value of var3 of index 1 is %c ",var3[1]);

printf("and address is %d", &var3[1]);

printf("\nThe value of var3 of index 2 is %c ",var3[2]);

printf("and address is %d",&var3[2]);

printf("\n The value of var3 of index 3 is %c ",var3[3]);

printf("and address is %d",&var3[3]);

printf("\nThe value of var3 of index 4 is %c ",var3[4]);

printf("and address is %d\n\n",&var3[4]);

return 0;

}
