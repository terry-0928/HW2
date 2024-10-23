#include <stdio.h>
#include <stdlib.h>

int main()
{
	int   number;   
	float balance; 
	float charged;   
	float credits;  
	float limit;    
	float balance2; 

	while (1)
	{
		printf("Enter account number (-1 to end): "); 
		scanf("%d", &number);

		if (number == -1) 
			break;

		printf("Enter beginning balance: "); 
		scanf("%f", &balance);
		printf("Enter total charges: ");    
		scanf("%f", &charged);
		printf("Enter total credits: ");   
		scanf("%f", &credits);
		printf("Enter credit limit: ");     
		scanf("%f", &limit);

		balance2 = balance + charged - credits;

		if (balance2 > balance) 
			printf("Account:      %d\n", number);
		printf("Credit limit: %.2f\n", limit); 
		printf("Balance:      %.2f\n", balance2); 
		printf("Credit Limit Exceeded.\n");

		printf("\n");
	}

	system("pause");
	return 0;
}