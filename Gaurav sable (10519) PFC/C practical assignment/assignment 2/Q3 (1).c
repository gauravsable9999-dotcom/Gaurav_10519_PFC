//Problem Statement: Login Authentication System

#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];

    char correctUsername[] = "Gaurav";
    char correctPassword[] = "4488";

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, correctUsername) == 0 &&
        strcmp(password, correctPassword) == 0) {
        printf("Login Successful.\n");
    } else {
        printf("Invalid Login.\n");
    }

    return 0;
}
