//Bank management system
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int transfer , account_number , deposit_amount , withdraw , amount;
char name[20];

void menu();
void deposit();
void withdraw_money();
void transfer_amount();
void account_details();
int main()
{
    printf("Enter username: ");
    scanf("%s" , &name);
    printf("Enter account number : ");
    scanf("%d", &account_number);
    menu();
    int choice;
    printf("Enter your choice : ");
    scanf("%d" , &choice);
    switch (choice)
    {
    case 1:
    {
        deposit();
        break;
    }
    case 2:
    {
        withdraw_money();
        break;
    }
    case 3:
    {
        transfer_amount();
        break;
    }
    case 4:
    {
        account_details();
        break;
    }
    default:
        break;
    }
    return 0;
}

void menu()
{
    printf("Main Menu\n");
    printf("1.Deposit Money\n");
    printf("2.Withdraw Money\n");
    printf("3.transfer Money\n");
    printf("4.Account Details\n");
}

// Fuction to deposit money
void deposit()
{
    FILE *account = fopen("Deposit.txt" , "a");
        printf("Deposit amount: ");
        scanf("%d" , &deposit_amount);
        amount += deposit_amount;
        printf("Money deposited successfully .\n Current balance : %d." , amount);
    fclose(account);
}

// Function to withdraw money
void withdraw_money()
{
    FILE *account = fopen("Deposit.txt" , "a");
        printf("Withdraw amount: ");
        scanf("%d" , &withdraw);
        amount -= withdraw;
        printf("Money withdrawer successfully .\n Current balance : %d." , amount);
    fclose(account);
}

// Function to transfer money
void transfer_amount()
{
    FILE *account = fopen("Deposit.txt" , "a");
        printf("Transfer amount: ");
        scanf("%d" , &transfer);
        int receiver;
        printf("Receiver Account number : ");
        scanf("%d" , &receiver);
        if (amount < transfer)
        {
            printf("Insufficient balance!!!");
        }
        else
        {
            amount -= transfer;
            printf("Money transferred successfully .\n Current balance : %d." , amount);
        }
    fclose(account);
}

// Function to print account details
void account_details()
{
    printf("Account Details\n");
    for(int i =0; i<50; i++)
    {
        printf("-");
    }
    printf("Name : %s\n", name);
    printf("Account N.o: %d\n", account_number);
    printf("Current Balance : %d\n", amount);
}