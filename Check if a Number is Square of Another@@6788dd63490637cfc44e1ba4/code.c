#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    int num1, num2;

    // Input two numbers
    scanf("%d %d", &num1, &num2);

    // Check if num2 is the square root of num1
    if (num2 * num2 == num1) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
