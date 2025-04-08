// Your code here...
#include <stdio.h>

// Helper function to compute factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Main function to compute and print factorials in the range
void factorialRange(int start, int end) {
    if (start > end || start < 0 || end < 0) {
        printf("Invalid range\n");
        return;
    }

    for (int i = start; i <= end; i++) {
        printf("%lld\n", factorial(i));
    }
}
