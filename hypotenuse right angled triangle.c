#include <stdio.h>
#include <math.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    double hypotenuse = sqrt(X * X + Y * Y);
    printf("%.2f\n", hypotenuse);
    return 0;
}
