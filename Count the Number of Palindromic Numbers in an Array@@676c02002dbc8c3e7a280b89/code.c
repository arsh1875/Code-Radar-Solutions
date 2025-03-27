// Your code here...
#include <stdio.h>

// Function to check if a number is palindromic
int isPalindrome(int num) {
    int original = num, reversed = 0, digit;

    while (num > 0) {
        digit = num % 10;          // Extract last digit
        reversed = reversed * 10 + digit; // Build reversed number
        num /= 10;                 // Remove last digit
    }

    return (original == reversed);  // Check if palindrome
}

int main() {
    int N, count = 0;

    // Taking array size as input
    scanf("%d", &N);

    int arr[N];

    // Taking array elements as input
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        // Check if the number is a palindrome
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    // Print the count of palindromic numbers
    printf("%d\n", count);

    return 0;
}
