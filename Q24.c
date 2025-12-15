#include <stdio.h>

int main() {
    char s[105];
    int i;

    scanf("%s", s);

    for (i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        else
            s[i] += 32;
    }

    printf("%s", s);
    return 0;
}
