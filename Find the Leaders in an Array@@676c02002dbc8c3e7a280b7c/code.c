#include <stdio.h>

void findLeaders(int arr[], int n) {
    int leaders[n]; // Array to store leaders
    int count = 0;
    int maxFromRight = arr[n - 1]; // Last element is always a leader

    leaders[count++] = maxFromRight; // Store last element as a leader

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i]; // Update maxFromRight
            leaders[count++] = maxFromRight; // Store leader
        }
    }

    // Print leaders in the original order
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Input array size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLeaders(arr, n);

    return 0;
}
