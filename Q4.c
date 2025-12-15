#include <stdio.h>

void swap_ptr(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int a, b, t;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    t = a;
    a = b;
    b = t;
    printf("\nTemp var swap: a=%d b=%d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nArithmetic swap: a=%d b=%d", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nXOR swap: a=%d b=%d", a, b);

    swap_ptr(&a, &b);
    printf("\nPointer swap: a=%d b=%d\n", a, b);

    return 0;
}
