#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int paycode;

    while (1) 
    {
        printf("Enter paycode (1: Manager, 2: Hourly Worker, 3: Commission Worker, 4: Pieceworker, (-1 to end)): ");
        scanf("%d", &paycode);

        if (paycode == -1) 
        {
            break;
        }

        switch (paycode) 
        {
        case 1: 
        {
            double salary;
            printf("Enter the weekly salary for the manager: ");
            scanf("%lf", &salary);
            printf("Salary is : $%.2f\n\n", salary);
            break;
        }
        case 2:
        {
            double worked, hourly_rate, pay;
            printf("Enter the number of hours worked: ");
            scanf("%lf", &worked);
            printf("Enter hourly rate of the worker: ");
            scanf("%lf", &hourly_rate);

            if (worked <= 40)
            {
                pay = worked * hourly_rate;
            }
            else
            {
                pay = (40 * hourly_rate) + ((worked - 40) * (hourly_rate * 1.5));
            }

            printf("Salary is : $%.2f\n\n", pay);
            break;
        }
        case 3: 
        {
            double sales, pay;
            printf("Enter the gross weekly sales: ");
            scanf("%lf", &sales);
            pay = 250 + (0.057 * sales);
            printf("Salary is : $%.2f\n\n", pay);
            break;
        }
        case 4: 
        {
            int number;
            double price, pay;
            printf("Enter the number of items produced: ");
            scanf("%d", &number);
            printf("Enter the pay per item: ");
            scanf("%lf", &price);
            pay = number * price;
            printf("Salary is : $%.2f\n\n", pay);
            break;
        }
        default:
            printf("Invalid paycode. Please enter a valid paycode.\n");
            break;
        }
    }

    system("pause");
    return 0;
}
