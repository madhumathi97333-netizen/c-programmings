#include <stdio.h>

int main() {
    int hurl, spin, speed;
    scanf("%d %d %d", &hurl, &spin, &speed);

    int c1 = (hurl > 50);
    int c2 = (spin > 60);
    int c3 = (speed > 100);

    int grade;

    if (c1 && c2 && c3) {
        grade = 10;
    } else if (c1 && c2) {
        grade = 9;
    } else if (c2 && c3) {
        grade = 8;
    } else if (c1 && c3) {
        grade = 7;
    } else if (c1 || c2 || c3) {
        grade = 6;
    } else {
        grade = 5;
    }

    printf("%d", grade);
    return 0;
}
