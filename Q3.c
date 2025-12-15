#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int brw = (~a) & b;
        a = a ^ b;
        b = brw << 1;
    }

    printf("Result = %d\n", a);

    return 0;
}
