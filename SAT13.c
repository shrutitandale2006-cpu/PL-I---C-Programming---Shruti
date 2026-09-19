/* Program (13) -> Write a program using the switch-case statement to create a menu-driven calculator that repeatedly performs arithmetic operations until the user exits the program. */

#include <stdio.h>
int main()
{
    int choice;
    float num1, num2, result;

    do
    {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
         case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            
          
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break; 
        case 5:
            printf("Exiting Calculator...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }

   } while (choice != 5); // Note: Code image shows 'choice != 5' exit condition in case 5, but says while(choice != 6). Keeping it synced to 5 makes it smooth.

    return 0;
}