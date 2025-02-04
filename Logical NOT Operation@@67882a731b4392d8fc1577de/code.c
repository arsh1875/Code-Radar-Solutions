#include <stdio.h>

int main() {
    int num1;

    // Taking input for both numbers
    scanf("%d\n", &num1);

    // Check if at least one number is greater than zero
    if (num1 > 0) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
