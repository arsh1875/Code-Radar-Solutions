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

// Function to find the Kth smallest element using QuickSelect
int kthSmallest(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pivotIndex = partition(arr, low, high); // Get partition index

        if (pivotIndex == k - 1) { // Found Kth smallest
            return arr[pivotIndex];
        } else if (pivotIndex > k - 1) { // Search in left partition
            return kthSmallest(arr, low, pivotIndex - 1, k);
        } else { // Search in right partition
            return kthSmallest(arr, pivotIndex + 1, high, k);
        }
    }
    return -1; // Invalid case
}
