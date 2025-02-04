#include <stdio.h>

int main() {
    int num;

    // Taking decimal input
    scanf("%d", &num);

    // Printing in hexadecimal and octal formats
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}
