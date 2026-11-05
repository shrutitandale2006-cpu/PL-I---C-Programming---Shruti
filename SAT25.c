/*

Program (25) -> Write a program to find the factorial of a given number using a user-defined function.

Solution (1): Using for loop

*/

#include <stdio.h>

int factorial(int n)

{

int fact = 1, i;

for(i = 1; i <= n; i++)

{

fact = fact* i;

}

return fact;

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
