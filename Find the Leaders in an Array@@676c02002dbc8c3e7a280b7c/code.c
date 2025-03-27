#include <stdio.h>

void findLeaders(int arr[], int n) {
    int leaders[n]; // Array to store leaders
    int count = 0;
    int maxFromRight = arr[n - 1]; // Last element is always a leader

    // Store the last element as a leader
    leaders[count++] = maxFromRight;

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) { // Allow equal values to be leaders
            maxFromRight = arr[i]; // Update maxFromRight
            leaders[count++] = maxFromRight; // Store leader
        }
    }

    // Print leaders in the original order and as many times as they appear
    for (int i = count - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (arr[j] == leaders[i]) { // Print leader as many times as it appears in the original array
                printf("%d ", arr[j]);
            }
        }
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
