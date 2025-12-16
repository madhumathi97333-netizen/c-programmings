#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    if (x > y) {           // ensure x < y
        int t = x;
        x = y;
        y = t;
    }

    if ((x == 1 && (y >= 2 && y <= 6)) ||
        (x == 2 && (y >= 3 && y <= 6)) ||
        (x == 3 && (y == 5 || y == 6)) ||
        (x == 4 && (y == 5 || y == 6))) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
