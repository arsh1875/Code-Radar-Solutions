#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input for both numbers
    scanf("%d %d", &num1, &num2);

    // Check if first num is greater than 0 and second num is less than 0
    if ((num1 > 0 && num2 < 0) || (num1 == 0 && num2 == 0)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
