#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, j;
    int rows = 10;

    printf("(A)\t     (B)\t (C)\t     (D)\n");

    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%s", "*");
        }
        for (j = i + 1; j <= rows; j++) 
        {
            printf(" ");
        }

        printf("   ");

        for (j = 1; j <= rows - i + 1; j++) 
        {
            printf("%s", "*");
        }
        for (j = rows - i + 2; j <= rows; j++) 
        {
            printf(" ");
        }

        printf("   ");

        for (j = 1; j <= i-1; j++)
        {
            printf(" ");
        }
        for (j = i + 1; j <= rows+1; j++)
        {
            printf("%s", "*");
        }

        printf("   ");

        for (j = 1; j<=rows-i; j++) 
        {
            printf(" ");
        }
        for (j = rows - i + 2; j <= rows+1; j++)
        {
            printf("%s", "*");
        }

        printf("\n");
    }

    system("pause");
    return 0;
}
