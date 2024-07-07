#include <stdio.h>

int main() {
    int choice, deposit, withdraw, balance = 1000;

    while (1) {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance is %d\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &deposit);
                balance += deposit;
                printf("New balance is %d\n", balance);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &withdraw);
                if (withdraw > balance) {
                    printf("Insufficient balance\n");
                } else {
                    balance -= withdraw;
                    printf("New balance is %d\n", balance);
                }
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
