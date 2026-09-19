// Program (11) -> Write a program to check whether a given number is even or odd.

#include <stdio.h>
int main()
{
	int num;
	printf("Enter your number: ");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
	   printf("The number is Even.");
	}
	else
	{
	   printf("The number is Odd.");
	}
	return 0;
}