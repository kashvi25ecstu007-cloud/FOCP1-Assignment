#include <stdio.h>

int main() {
    int a[50], n, i, f = -1;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        if (a[i] == 99) {
            f = i;
            break;
        }

    printf("%d", f);
    return 0;
}
