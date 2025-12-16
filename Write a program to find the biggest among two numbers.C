#include <stdio.h>

int main() {
    int x, y;
    
    // Read two integers
    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x > y) {
        printf("%d", x);
    } else {
        printf("%d", y);
    }
    
    return 0;
}
