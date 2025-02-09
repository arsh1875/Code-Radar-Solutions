#include <stdio.h>
#include <stdlib.h> // For malloc()

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

    // Check for invalid input
    if (n <= 0) {
        printf("Invalid input. Number of elements must be positive.\n");
        return 1; // Exit the program
    }

    int *arr = (int *)malloc(n * sizeof(int)); // Dynamic memory allocation
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

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

    free(arr); // Free allocated memory
    return 0;
}
