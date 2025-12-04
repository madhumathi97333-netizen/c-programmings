#include <stdio.h>

int main() {
    double basic, da, hra, gross;
    
    if (scanf("%lf", &basic) != 1) {
        return 0;
    }

    if (basic <= 10000) {
        da = 0.80 * basic;
        hra = 0.20 * basic;
    } else if (basic <= 20000) {
        da = 0.90 * basic;
        hra = 0.25 * basic;
    } else {
        da = 0.95 * basic;
        hra = 0.30 * basic;
    }

    gross = basic + da + hra;

    printf("%.2f\n", gross);

    return 0;
}
