/*

Program (22) -> Write a program to read two matrices of the same order, perform matrix addition, and display the resultant matrix using a two-dimensional array.

Solution (1): Using for loop

*/

#include <stdio.h>

int main()

{int a[3][3], b[3][3], c[3][3];
int i, j; 
 printf("Enter elements of Matrix A:\n"); 
 for(i = 0; i < 3; i++) 
 { 
     for(j = 0; j < 3; j++)
         { 
             scanf("%d", &a[i][j]);
         }
 }

printf("Enter elements of Matrix B:\n");

for(i = 0; i < 3; i++) 
{ 
    for(j = 0; j < 3; j++) 
    { 
        scanf("%d", &b[i][j]);
    }

}

for(i = 0; i < 3; i++)
    { 
        for(j = 0; j < 3; j++) 
        { 
            c[i][j] = a[i][j]+b[i][j];
        }

}

printf("\nResultant Matrix:\n");

for(i = 0; i < 3; i++) 
{ 
    for(j = 0; j < 3; j++)
        { 
            printf("%4d", c[i][j]);
        }
    printf("\n"); 
} 
 return 0;


}