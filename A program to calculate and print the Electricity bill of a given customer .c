#include <stdio.h>

int main() {
    int units;
    double rate, amount, surcharge;

    if (scanf("%d", &units) != 1) {
        return 0;
    }

    if (units <= 199) {
        rate = 1.20;
    } else if (units < 400) {
        rate = 1.50;
    } else if (units < 600) {
        rate = 1.80;
    } else {
        rate = 2.00;
    }

    amount = units * rate;

    if (amount > 400) {
        surcharge = amount * 0.15;
        amount += surcharge;
    } else if (amount < 100) {
        amount = 100.0;
    }

    printf("%.2f\n", amount);

    return 0;
}
