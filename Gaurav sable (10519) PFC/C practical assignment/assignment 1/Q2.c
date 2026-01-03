/*Write a C program to input two integers and perform addition, subtraction, multiplication,
division, and modulus. Display the results*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Division: %d / %d = %d\n", a, b, a / b);
        printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and Modulus are not possible (division by zero).\n");
    }

    return 0;
}
