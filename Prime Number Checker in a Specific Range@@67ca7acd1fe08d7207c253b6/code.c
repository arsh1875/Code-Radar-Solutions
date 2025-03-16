
// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // Prime number
}

// Function to print prime numbers in a given range
void printPrimesInRange(int a, int b) {
    int found = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("No prime numbers");
    }
    printf("\n");
}