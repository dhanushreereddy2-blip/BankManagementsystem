#ifndef BANK_H
#define BANK_H

typedef struct
{
    int acc_no;
    char name[50];
    int age;
    char mobile[11];
    int pin;
}Account;

extern Account user; //Account is user defined datatype
extern int login_status;
extern double balance;

void createAccount(void);
void login(void);
void viewBalance(double balance);
void depoistFunds(double *balance);
void withdrawFunds(double *balance);
void deleteAccount(void);

#endif