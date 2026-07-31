#include<stdio.h>
#include<string.h>
#include"bank.h"

void deleteAccount(void)
{
    char choice;

    if(login_status == 0)
    {
        printf("\nERROR : Please login first.\n");
        return;
    }

    printf("\n=========DELETE ACCOUNT===========\n");
    printf("Are you sure you want to delete account? (Y/N): ");
    scanf(" %c",&choice);

    if(choice == 'Y' || choice == 'y')
    {
        user.acc_no = 0;
        strcpy(user.name,"");
        user.age = 0;
        strcpy(user.mobile,"");
        user.pin = 0;
        balance = 0;

        login_status = 0;

        printf("\nAccount Deleted Successfully.\n");
    }
    else
    {
        printf("\nAccount Deletion Cancelled.\n");
    }
}