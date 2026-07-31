#include<stdio.h>
#include"bank.h"

void login(void)
{
    int acc_no;
    int pin;
    int attempts = 3;

    printf("\n======== LOGIN =========\n");

    while(attempts > 0)
    {
    /*========Account Number Validation=========*/
    do{
        printf("Enter Account Number: ");
        scanf("%d",&acc_no);

        if(acc_no < 0)
        {
            printf("ERROR: Account Number must be greater than 0.\n");
        }
    }while(acc_no <=0);

    /*=========Pin validation================*/
    do{
        printf("Enter 4-digit PIN: ");
        scanf("%d",&pin);

        if(pin < 1000 || pin > 9999)
        {
            printf("ERROR: PIN must be exactly 4 digits.\n");
        }
    }while(pin < 1000 || pin  > 9999);

    /*===========Login check================*/
    if(acc_no == user.acc_no && pin == user.pin)
    {
        login_status = 1;
        printf("\nLogin Successful.\n");
        return;
    }
    else
    {
        attempts--;
        printf("\nERROR: Invalid Account Number or PIN.\n");

        if(attempts > 0)
        {
            printf("Attempts Left:%d\n",attempts);
        }
    }
   }//when attempts become 0 condition fails print error msg
   printf("ERROR: Login Failed! Account Locked.\n");

}