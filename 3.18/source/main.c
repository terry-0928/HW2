#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float grossSales, earnings;
    const float baseSalary = 200.0;
    const float commissionRate = 0.09;

    while (1) 
    {

        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &grossSales);

        if (grossSales == -1) 
        {
            break; 
        }

        earnings = baseSalary + (commissionRate * grossSales);

        printf("Salary is: $%.2f\n\n", earnings);
    }

    system("pause");
    return 0;
}
