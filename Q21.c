#include <stdio.h>

int main() {
    int L, n, w, h, i;

    scanf("%d", &L);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &w, &h);

        if (w < L || h < L)
            printf("UPLOAD ANOTHER\n");
        else if (w == h)
            printf("ACCEPTED\n");
        else
            printf("CROP IT\n");
    }

    return 0;
}
