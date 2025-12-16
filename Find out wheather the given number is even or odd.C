#include <stdio.h>

int main() {
    int x;
    
    // Read an integer
    scanf("%d", &x);
    
    if (x % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
    
    return 0;
}
