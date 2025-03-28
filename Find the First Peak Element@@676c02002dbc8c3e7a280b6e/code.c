#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    // If there's only one element, it's a peak
    if (n == 1) return arr[0];

    // Check first element separately
    if (arr[0] > arr[1]) return arr[0];

    // Check for peak elements in the middle of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];  // First peak found
        }
    }

    // Check last element separately
    if (arr[n - 1] > arr[n - 2]) return arr[n - 1];

    return -1;  // No peak found
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find first peak element
    int peak = findFirstPeak(arr, n);

    // Output the first peak element
    printf("%d\n", peak);

    return 0;
}
