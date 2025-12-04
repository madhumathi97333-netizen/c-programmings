#include <stdio.h>

int main() {
    int phy, chem, bio, math, cs;
    int total;
    float percentage;

    if (scanf("%d %d %d %d %d", &phy, &chem, &bio, &math, &cs) != 5) {
        return 0;
    }

    total = phy + chem + bio + math + cs;
    percentage = total / 5.0f;

    if (percentage >= 90) {
        printf("Grade A\n");
    } else if (percentage >= 80) {
        printf("Grade B\n");
    } else if (percentage >= 70) {
        printf("Grade C\n");
    } else if (percentage >= 60) {
        printf("Grade D\n");
    } else if (percentage >= 40) {
        printf("Grade E\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}
