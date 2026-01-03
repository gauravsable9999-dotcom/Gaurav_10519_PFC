//Problem Statement: Bank Interest Update System

#include <stdio.h>

int main() {
    float balance;
    float interest, maintenanceCharge, bonusFactor;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    printf("Enter interest amount to add: ");
    scanf("%f", &interest);
    balance += interest;   

    printf("Enter annual maintenance charge to deduct: ");
    scanf("%f", &maintenanceCharge);
    balance -= maintenanceCharge;  

    printf("Enter bonus factor: ");
    scanf("%f", &bonusFactor);
    balance *= bonusFactor;   

    printf("\nUpdated Account Balance: %.2f\n", balance);

    return 0;
}
