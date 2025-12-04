#include <stdio.h>

int main() {
    int a, b, c;
    
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 0;
    }

    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid triangle\n");
    } else {
        printf("Invalid triangle\n");
    }

    return 0;
}
