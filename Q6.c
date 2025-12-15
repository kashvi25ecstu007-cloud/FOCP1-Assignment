#include <stdio.h>

int main() {
    int ch, n, d = 0, b = 1, r;

    printf("1:Bin to Dec  2:Dec to Bin\n");
    scanf("%d", &ch);

    if (ch == 1) {
        scanf("%d", &n);
        while (n) {
            r = n % 10;
            d += r * b;
            b *= 2;
            n /= 10;
        }
        printf("%d", d);
    } else {
        scanf("%d", &n);
        while (n) {
            printf("%d", n % 2);
            n /= 2;
        }
    }
    return 0;
}
