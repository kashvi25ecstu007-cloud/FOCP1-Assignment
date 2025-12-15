#include <stdio.h>

int main() {
    int a[50], n, t, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &t);

    for (i = 0; i < n; i++)
        if (a[i] >= t)
            break;

    printf("%d", i);
    return 0;
}
