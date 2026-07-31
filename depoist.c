#include<stdio.h>
#include "bank.h"

void depoistFunds(double *balance)
{
    double depoist;
    printf("Enter the amount to depoist:\n");
    scanf("%lf",&depoist);
    
    if(depoist > 0)
    {
      *balance += depoist;
      printf("Depoisted $%.2lf. Your new balance is: $%.2lf\n",depoist,*balance);

      char choice;
      printf("Do you want to view your balance? (Y/N): ");
      scanf(" %c",&choice);

      if(choice == 'Y' || choice == 'y')
      {
        viewBalance(*balance);
      }
    }
    else
    {
        printf("Invalid depoist amount. Please try again.\n");
    }
}