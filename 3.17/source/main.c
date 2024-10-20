#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mortgageAmount, interestRate, totalInterest, totalAmountPayable, monthlyPayment;
    int mortgageTermYears, mortgageTermMonths;

    printf("Enter mortgage amount in dollars: ");
    scanf("%f", &mortgageAmount);

    printf("Enter mortgage term (in years): ");
    scanf("%d", &mortgageTermYears);

    printf("Enter Interest rate:: ");
    scanf("%f", &interestRate);

    mortgageTermMonths = mortgageTermYears * 12;

    interestRate /= 100;

    totalInterest = mortgageAmount * interestRate * mortgageTermYears;

    totalAmountPayable = mortgageAmount + totalInterest;

    monthlyPayment = totalAmountPayable / mortgageTermMonths;

    printf("Total interest payable: $%.2f\n", totalInterest);
    printf("Total amount payable: $%.2f\n", totalAmountPayable);
    printf("Required monthly payment: $%.2f\n", monthlyPayment);

    system("pause");
    return 0;
}
