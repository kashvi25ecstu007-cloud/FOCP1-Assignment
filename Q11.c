#include <stdio.h>

int main() {
    int a[50], e[50], o[50], n, i, ei = 0, oi = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            e[ei++] = a[i];
        else
            o[oi++] = a[i];
    }

    for (i = 0; i < ei; i++) printf("%d ", e[i]);
    printf("\n");
    for (i = 0; i < oi; i++) printf("%d ", o[i]);

    return 0;
}
