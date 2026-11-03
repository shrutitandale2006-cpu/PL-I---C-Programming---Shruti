/*

Program (28) -> Write a program to find the factorial of a given number using a user-defined function.

Solution (4): Using Recursive Function

*/

#include <stdio.h>

int factorial(int n)

{

if(n == 0 || n == 1)

return 1;

else

return n* factorial(n - 1);

}

int main()

{

int n, result;

printf("Enter a number: ");

scanf("%d", &n);

result = factorial(n);

printf("Factorial of %d = %d", n, result);

return 0;

}