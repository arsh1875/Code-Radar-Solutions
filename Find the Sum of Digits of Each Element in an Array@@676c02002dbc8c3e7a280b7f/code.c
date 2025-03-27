#include <stdio.h>

// Function to find sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  // Extract last digit and add to sum
        num /= 10;        // Remove last digit
    }
    return sum;
}

int main() {
    int N;

    // Taking array size as input
    scanf("%d", &N);

    int arr[N];

    // Taking array elements as input
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding and printing sum of digits for each element
    for (int i = 0; i < N; i++) {
        printf("%d ", sumOfDigits(arr[i]));
    }
    printf("\n");

    return 0;
}
