#include <stdio.h>

int main() {
    int t, g, p, n, i, a, b;
    scanf("%d", &t);

    while (t--) {
        int c1 = 0, c2 = 0;

        scanf("%d %d", &g, &p);
        scanf("%d", &n);

        for (i = 0; i < n; i++) {
            scanf("%d %d", &a, &b);
            c1 += a;
            c2 += b;
        }

        int x = c1 * g + c2 * p;
        int y = c1 * p + c2 * g;

        printf("%d\n", x < y ? x : y);
    }

    return 0;
}
