#include <stdio.h>

int main() {
    int X1, Y1, X2, Y2;

    // Read four space-separated integers
    if (scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2) != 4) {
        return 0;
    }

    int total1 = X1 + Y1;
    int total2 = X2 + Y2;

    if (total1 < total2) {
        printf("%d\n", total1);
    } else {
        printf("%d\n", total2);
    }

    return 0;
}

