#include <stdio.h>

int main() {
    int a, b, c;
    
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 0;
    }

    if (a == b && b == c) {
        printf("Equilateral triangle\n");
    } else if (a == b || a == c || b == c) {
        printf("Isosceles triangle\n");
    } else {
        printf("Scalene triangle\n");
    }

    return 0;
}
