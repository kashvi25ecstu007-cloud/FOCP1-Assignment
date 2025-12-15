#include <stdio.h>

int main() {
    int a[50], n, i, x = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        x ^= a[i];
    }

    printf("%d", x);
    return 0;
}
