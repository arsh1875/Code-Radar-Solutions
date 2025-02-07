#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    double num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Check if num2 is the square root of num1
    if (num2 == sqrt(num1)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
