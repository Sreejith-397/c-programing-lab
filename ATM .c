#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.00, amount;

    while(1) {
        // Print ATM menu
        printf("\n=== ATM MENU ===\n");
        printf("1. View Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        // Ensure valid input for choice
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n'); // Flush the input buffer
            continue;
        }

        switch(choice) {
            case 1:
                printf("Your Balance: ₹%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ₹");
                if (scanf("%f", &amount) != 1) {
                    printf("Invalid input. Please enter a valid amount.\n");
                    while(getchar() != '\n'); // Flush the input buffer
                    break;
                }
                if (amount <= 0) {
                    printf("Amount should be positive.\n");
                    break;
                }
                balance += amount;
                printf("Deposit Successful! New Balance: ₹%.2f\n", balance);  
                break;
            case 3:
                printf("Enter amount to withdraw: ₹");
                if (scanf("%f", &amount) != 1) {
                    printf("Invalid input. Please enter a valid amount.\n");
                    while(getchar() != '\n'); // Flush the input buffer
                    break;
                }
                if (amount <= 0) {
                    printf("Amount should be positive.\n");
                    break;
                }
                if(amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful! New Balance: ₹%.2f\n", balance);
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;
            case 4:
                printf("Thank you! Visit Again.\n");
                return 0; // Ends the program gracefully
            default:
                printf("Invalid Choice! Please choose a valid option.\n");
        }
    }

    return 0;
}
