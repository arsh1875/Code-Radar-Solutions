#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function (Lomuto partition scheme)
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot element
    int i = low - 1; // Index for smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) { // Compare with pivot
            i++;
            swap(&arr[i], &arr[j]); // Swap elements
        }
    }
    swap(&arr[i + 1], &arr[high]); // Place pivot in correct position
    return i + 1; // Return pivot index
}

// Function to find the Kth smallest element
int kthSmallest(int arr[], int n, int k) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int pivotIndex = partition(arr, low, high);

        if (pivotIndex == k - 1) {
            return arr[pivotIndex]; // Found Kth smallest
        } else if (pivotIndex > k - 1) {
            high = pivotIndex - 1; // Search in left partition
        } else {
            low = pivotIndex + 1; // Search in right partition
        }
    }
    
    return -1; // Should not reach here in valid cases
}

