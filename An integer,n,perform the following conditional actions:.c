#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 1) {
        // n is odd
        printf("weird\n");
    } else {
        // n is even
        if (n >= 2 && n <= 5) {
            printf("not weird\n");
        } else if (n >= 6 && n <= 20) {
            printf("weird\n");
        } else { // n > 20
            printf("not weird\n");
        }
    }

    return 0;
}
