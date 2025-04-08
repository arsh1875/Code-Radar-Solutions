// Your code here...
#include <stdio.h>

int isPalindromeArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // It's a palindrome
}

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isPalindromeArray(arr, n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
