#include<stdio.h>
#include "bank.h"

void withdrawFunds(double *balance)
{
   double withdrawal;
   printf("Enter the amount to withdraw: $");
   scanf("%lf",&withdrawal);

   if(withdrawal <= 0)
   {
    printf("Invalid withdrawal amount. Please try again.\n");
   }
   else if(withdrawal > *balance)
   {
    printf("Insufficient balance! Your current balance is $%.2lf\n",*balance);
   }
   else
   {
    *balance -=withdrawal;
    printf("Withdrawn $%.2lf. Your new balance is: $%.2lf\n",withdrawal,*balance);
   }
}