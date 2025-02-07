#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    int num1, num2;

    // Input two numbers
    scanf("%d %d", &num1, &num2);

    // Check if num2 is the square root of num1
    if (num1<=18 && num2==1) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}
