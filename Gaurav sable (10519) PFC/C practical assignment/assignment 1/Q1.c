/*Write a C program to declare variables of type int, float, char, and double. Initialize them
with values and print their values and sizes using sizeof operator.*/

#include <stdio.h>

int main() {
    int i = 10;
    float f = 3.14f;
    char c = 'A';
    double d = 123.456;

    printf("Integer value: %d, Size: %zu bytes\n", i, sizeof(i));
    printf("Float value: %.2f, Size: %zu bytes\n", f, sizeof(f));
    printf("Character value: %c, Size: %zu bytes\n", c, sizeof(c));
    printf("Double value: %.3lf, Size: %zu bytes\n", d, sizeof(d));

    return 0;
}
