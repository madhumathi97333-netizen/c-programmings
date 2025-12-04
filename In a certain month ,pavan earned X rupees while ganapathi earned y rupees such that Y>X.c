#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int donation = Y - X;
    printf("%d\n", donation);

    return 0;
}
