#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) { // Check only 6k ± 1 numbers
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases

    int numbers[t]; // Store inputs
    for (int i = 0; i < t; i++) {
        scanf("%d", &numbers[i]); // Read all numbers first
    }

    for (int i = 0; i < t; i++) {
        printf("%d\n", isPrime(numbers[i]) ? 1 : 0); // Print results after input loop
    }

    return 0;
}
