# 🏦 Bank Management System

A simple **Bank Management System** developed in **C Programming** that simulates basic banking operations through a menu-driven interface. The project demonstrates the use of structures, functions, header files, input validation, and modular programming. It allows users to create an account, securely log in using a PIN, deposit and withdraw money, check account balance, and delete their account. :contentReference[oaicite:0]{index=0} :contentReference[oaicite:1]{index=1}

## 📌 Features

- ✅ Create a new bank account
- 🔐 Secure login with Account Number and 4-digit PIN
- 💰 Deposit funds
- 💸 Withdraw funds
- 📊 View account balance
- 🗑️ Delete account
- ✔️ Input validation for account number, name, age, mobile number, and PIN

## 🛠️ Technologies Used

- C Programming
- GCC Compiler
- Standard C Libraries
- Modular Programming
- Header Files
- Structures

## 📂 Project Structure

BankManagementSystem/
│── main.c
│── bank.h
│── create.c
│── login.c
│── deposit.c
│── withdraw.c
│── view.c
│── delete.c
│── Makefile
└── README.md


## ⚙️ Functionalities

### 1. Create Account
- Creates a new bank account.
- Validates:
  - Account number
  - Customer name
  - Age (18–100)
  - 10-digit mobile number
  - 4-digit PIN

### 2. Login
- Login using:
  - Account Number
  - PIN
- Allows a maximum of three attempts.

### 3. View Balance
- Displays the current account balance.

### 4. Deposit Funds
- Deposits money into the account.
- Updates the balance immediately.

### 5. Withdraw Funds
- Withdraws money from the account.
- Prevents withdrawal if the balance is insufficient.

### 6. Delete Account
- Deletes all account information after user confirmation.

## ▶️ How to Compile

Using GCC:

```bash
gcc main.c create.c login.c depoist.c withdraw.c view.c delete.c -o BankManagementSystem


## ▶️ Run

### Linux

```bash
./BankManagementSystem

### Windows

```bash
BankManagementSystem.exe

## 📋 Sample Menu

==== Welcome to Bank ====

1. Create Account
2. Login
3. View Balance
4. Deposit Funds
5. Withdraw Funds
6. Delete Account
7. Exit

## 🎯 Concepts Used

- Structures
- Header Files
- Modular Programming
- Functions
- Global Variables
- Input Validation
- Conditional Statements
- Loops
- User Authentication


## 🚀 Future Enhancements

- Store account details permanently using files.
- Support multiple customer accounts.
- Password encryption.
- Transaction history.
- Money transfer between accounts.
- Interest calculation.
- Admin dashboard.
- Account search functionality.


## ⭐ Learning Outcome

This project helped strengthen concepts of:
- Modular C Programming
- Structures
- Header Files
- Function Calls
- Input Validation
- Menu-Driven Programming
- Banking Application Logic
