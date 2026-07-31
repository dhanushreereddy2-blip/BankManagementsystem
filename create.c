#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include"bank.h"

Account user;
int login_status = 0;

void createAccount(void)
{
    int valid;
    printf("\n===== CREATE ACCOUNT =====\n");
    
  /*----------  Account number-------------*/
     do
     {
    printf("Enter Account number: ");
    scanf("%d",&user.acc_no);
     if(user.acc_no <= 0)
     {
     printf("ERROR: Invalid Account Number! Try again.\n");
     }
     }while(user.acc_no <= 0);


     /*-----------------Name----------------*/
      do{
     valid = 1;  //assume name is correct

    printf("Enter Name: ");
    scanf(" %[^\n]",user.name);

    for(int i=0;user.name[i] != '\0';i++)
    {
        if(!isalpha(user.name[i]) && user.name[i] != ' ')  //allowing spaces
        {
            valid = 0;
            break;
        }
    }
    if(valid == 0)
    {
        printf("ERROR: Name should contain only alphabets.\n");
    }

   }while(valid == 0);  //if it is not valid again it ask for name   if it is 1 it will end the loop


    /*-------------Age----------------------*/
     do{
    printf("Enter Age: ");
    scanf(" %d",&user.age);

      if(user.age < 18 || user.age > 100)
     {
        printf("ERROR: Age must be below 18 and 100.\n");
     }

     }while(user.age < 18 || user.age > 100);  //if age is false means again it will ask


     /*-------------Mobile Number------------------*/
     do{
        valid = 1;

    printf("Enter Mobile Number: ");
    scanf(" %[^\n]",user.mobile);
     
    if(strlen(user.mobile)!= 10)
    {
        valid = 0;
    }

    for(int i=0;user.mobile[i] != '\0';i++)
    {
        if(!isdigit(user.mobile[i]))
        {
            valid = 0;
            break;
        }
    }
     
    if(valid == 0)
    {
        printf("ERROR: Enter a valid 10-digit mobile number.\n");
    }
     }while(valid == 0);


     /*-------------Pin-----------------*/
     do{
    printf("Create 4-digit PIN: ");
    scanf(" %d",&user.pin);
    
    if(user.pin < 1000 || user.pin > 9999)
    {
      printf("ERROR: Pin must be exactly 4 digits.\n");
    }
    }while(user.pin < 1000 || user.pin > 9999);

    printf("\n=============================================");
    printf("\nAccount Created Successfully!\n");
    printf("Account Number:%d\n",user.acc_no);
    printf("Name          :%s\n",user.name);
    printf("Age           :%d\n",user.age);
    printf("Mobile Number :%s\n",user.mobile);
    printf("=============================================\n");
}