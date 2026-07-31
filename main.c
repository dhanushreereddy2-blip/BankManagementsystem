#include<stdio.h>
#include "bank.h"

   double balance = 0.0;
int main()
{
unsigned short choice;

    do
    {
        printf("\n====Welcome to Bank====\n");
        printf("1. Createaccount\n");
        printf("2. Login\n");
        printf("3. View Balance\n");
        printf("4. Deposit Funds\n");
        printf("5. Withdraw Funds\n");
        printf("6. Delete Account\n");
        printf("7. Exit\n");

        printf("Enter the choice:\n");
        scanf("%hu",&choice);


        switch(choice)
        {
            case 1:
            createAccount();
            break;
            case 2:
            login();
            break;
            case 3:
            viewBalance(balance);
            break;
            case 4:
            depoistFunds(&balance);
            break;
            case 5:
             withdrawFunds(&balance);
            break;
            case 6:
            deleteAccount();
            break;
            case 7:
            printf("Thank you for using the banking system.\n");
            break;
            default:
            printf("Invalid choice! Please Enter the valid option.\n");
        }

    }while(choice != 7);
}