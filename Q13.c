#include <stdio.h>

int main() {
    int a[50], n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < n - 1; i++)
        if (a[i] >= a[i - 1] && a[i] >= a[i + 1])
            printf("%d", a[i]);

    return 0;
}
