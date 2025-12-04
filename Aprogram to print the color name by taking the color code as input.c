#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);   // space before %c skips any whitespace

    if (ch == 'V' || ch == 'v') {
        printf("Violet\n");
    } else if (ch == 'I' || ch == 'i') {
        printf("Indigo\n");
    } else if (ch == 'B' || ch == 'b') {
        printf("Blue\n");
    } else if (ch == 'G' || ch == 'g') {
        printf("Green\n");
    } else if (ch == 'Y' || ch == 'y') {
        printf("Yellow\n");
    } else if (ch == 'O' || ch == 'o') {
        printf("Orange\n");
    } else if (ch == 'R' || ch == 'r') {
        printf("Red\n");
    } else {
        printf("-1\n");
    }

    return 0;
}
