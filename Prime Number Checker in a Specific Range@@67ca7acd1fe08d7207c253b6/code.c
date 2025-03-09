// Your code here...#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0; // 0 and 1 are not prime
    if (num == 2 || num == 3) return 1; // 2 and 3 are prime
    if (num % 2 == 0 || num % 3 == 0) return 0; // Eliminate even numbers

    for (int i = 5; i * i <= num; i += 6) { // Check only odd numbers
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    
    return 1;
}

// Function to find prime numbers in a range [L, R]
void printPrimesInRange(int L, int R) {
    for (int i = L; i <= R; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

