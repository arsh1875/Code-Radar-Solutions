#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) { // Check only 6k ± 1 numbers
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

