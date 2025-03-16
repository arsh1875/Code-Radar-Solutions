#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) break return 0 ;
    }
    if(num%i!=0){
        printf("No prime numbers");
    }
}
int printPrimesInRange(int a,int b){
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
}
