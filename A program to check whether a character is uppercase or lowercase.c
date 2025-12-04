#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("uppercase alphabet\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("lowercase alphabet\n");
    } else {
        printf("not an alphabet\n");
    }

    return 0;
}
