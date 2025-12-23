#include <stdio.h>

// Function declarations
void checkBalance();
void deposit();
void withdraw();

// Global variable
int balance = 1000;

int main() {
    int choice;
    
    while (1) {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using ATM!\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

void checkBalance() {
    printf("Your current balance is: ₹%d\n", balance);
}

void deposit() {
    int amount;
    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    if (amount > 0) {
        balance += amount;
        printf("₹%d deposited successfully!\n", amount);
    } else {
        printf("Invalid amount!\n");
    }
}

void withdraw() {
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount > balance) {
        printf("Insufficient balance!\n");
    } else if (amount <= 0) {
        printf("Invalid amount!\n");
    } else {
        balance -= amount;
        printf("₹%d withdrawn successfully!\n", amount);
    }
}
