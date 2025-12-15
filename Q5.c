#include <stdio.h>

int main() {
    int x, y;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("1st Quadrant\n");
    else if (x < 0 && y > 0)
        printf("2nd Quadrant\n");
    else if (x < 0 && y < 0)
        printf("3rd Quadrant\n");
    else if (x > 0 && y < 0)
        printf("4th Quadrant\n");
    else if (x == 0 && y == 0)
        printf("Origin\n");
    else if (x == 0)
        printf("Y-Axis\n");
    else
        printf("X-Axis\n");

    return 0;
}
