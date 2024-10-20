#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float worked, hourly_rate, pay;

    while(1)
    {
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%f", &worked);

        if (worked == -1)
        {
            break;
        }

        printf("Enter hourly rate of the worker: ");
        scanf("%f", &hourly_rate);


        if (worked <= 40) 
        {
            pay = worked * hourly_rate;
        }
        else 
        {
            pay = (40 * hourly_rate) + ((worked - 40) * (hourly_rate * 1.5));
        }

        printf("Salary is : $%.2f\n\n", pay);
    }

    system("pause");
    return 0;
}
