#include <stdio.h>

int main() {
    int a[50], n, i, c = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        if (a[i] == 99) {
            printf("%d ", i);
            c++;
        }

    printf("\n%d", c);
    return 0;
}
