#include <stdio.h>

int main() {
    unsigned int a = 1;
    unsigned int b = 2;
    unsigned int next;
    int count;

    printf("%u, %u", a, b);

    for (count = 2; count < 98; count++) {
        next = a + b;
        printf(", %u", next);
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
