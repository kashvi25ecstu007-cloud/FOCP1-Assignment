#include <stdio.h>

int main() {
    int a[50], n, i, j, f = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] == a[j]) {
                printf("%d ", a[i]);
                f = 1;
                break;
            }

    if (!f) printf("-1");
    return 0;
}
