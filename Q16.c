#include <stdio.h>

int main() {
    int a[50], n, p, v, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d %d", &p, &v);

    for (i = n; i > p; i--)
        a[i] = a[i - 1];
    a[p] = v;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
