#include <stdio.h>
#include <string.h> // For memset (if needed)

char* welcome() {
    return "Welcome to Code Radar!";
}

// Function to sort the array in ascending order (Bubble Sort)
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n]; // Variable-length array (valid in C99+)

    // Input loop
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order
    sortArray(arr, n);

    // Display the sorted elements
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
