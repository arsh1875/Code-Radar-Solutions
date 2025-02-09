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

    while (t--) {
        int n;
        scanf("%d", &n); // Read each number
        printf("%d\n", isPrime(n) ? 1 : 0); // Print 1 if prime, 0 otherwise
    }

    return 0;
}
