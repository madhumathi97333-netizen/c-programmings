#include <stdio.h>

int main() {
    long long X, Y;          // X = total money, Y = money spent per day
    scanf("%lld %lld", &X, &Y);

    long long needed = 30 * Y;

    if (X >= needed)
        printf("YES");
    else
        printf("NO");

    return 0;
}
