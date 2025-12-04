#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int extra;
    if (X > Y) {
        extra = X - Y;
    } else {
        extra = 0;
    }

    printf("%d\n", extra);
    return 0;
}
