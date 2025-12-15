#include <stdio.h>

int main() {
    char s[25];
    int i, z = 0, o = 0;

    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'z')
            z++;
        else if (s[i] == 'o')
            o++;
    }

    if (2 * z == o)
        printf("Yes");
    else
        printf("No");

    return 0;
}
