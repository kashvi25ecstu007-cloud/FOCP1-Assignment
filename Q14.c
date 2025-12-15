#include <stdio.h>

int main() {
    int a[50], n, i, j, c, cnt = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        c = 0;
        for (j = 1; j <= a[i]; j++)
            if (a[i] % j == 0) c++;
        if (c == 2) cnt++;
    }

    printf("%d", cnt);
    return 0;
}
