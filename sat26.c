/*

Program (26) -> Write a program to find the factorial of a given number using a user-defined function.

Solution (2): Using while loop

*/

#include <stdio.h>

int factorial(int n)

{

int fact = 1, i = 1;

while(i <= n)

{

fact = fact* i;

i++;

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