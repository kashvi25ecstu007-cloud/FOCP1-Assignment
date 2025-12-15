#include <stdio.h>

int main() {
    int num, og, remndr, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    og = num;

    while (num != 0) {
        remndr = num % 10;
        sum = sum + (remndr * remndr * remndr);
        num = num / 10;
    }

    if (sum == og)
        printf("%d is an Armstrong no.\n", og);
    else
        printf("%d is not an Armstrong no.\n", og);

    return 0;
}
