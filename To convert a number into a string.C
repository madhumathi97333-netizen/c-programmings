#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int original = n;
    // Work with absolute value for factors, but keep original for printing
    if (n < 0) n = -n;

    int printed = 0;

    if (n % 3 == 0) {
        printf("Pling");
        printed = 1;
    }
    if (n % 5 == 0) {
        printf("Plang");
        printed = 1;
    }
    if (n % 7 == 0) {
        printf("Plong");
        printed = 1;
    }

    if (!printed) {
        printf("%d", original);
    }

    return 0;
}
