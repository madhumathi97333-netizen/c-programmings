#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if (x < 3) {
        printf("LIGHT\n");
    } else if (x < 7) {   // here x is >= 3 and < 7
        printf("MODERATE\n");
    } else {
        printf("HEAVY\n");
    }

    return 0;
}
