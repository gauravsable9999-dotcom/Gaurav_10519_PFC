/*Write a C program to demonstrate the difference between ++x (pre-increment) and x++
(post-increment) in an arithmetic expression.*/

#include <stdio.h>

int main() {
    int x = 5;
    int a, b;

    a = ++x;  

    printf("After pre-increment (++x):\n");
    printf("x = %d, a = %d\n\n", x, a);

    x = 5;

    b = x++;   

    printf("After post-increment (x++):\n");
    printf("x = %d, b = %d\n", x, b);

    return 0;
}
