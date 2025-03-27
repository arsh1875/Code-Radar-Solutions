// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting (ascending order)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find the median
int findMedian(int arr[], int size) {
    // Sort the array
    qsort(arr, size, sizeof(int), compare);

    // Find median
    if (size % 2 == 1) {
        return arr[size / 2]; // Odd size: middle element
    } else {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0; // Even size: average of two middle elements
    }
}

int main() {
    int n;
    
    // Taking array size input
    scanf("%d", &n);

    int arr[n];

    // Taking array elements input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print median
    printf("%d\n", findMedian(arr, n));

    return 0;
}
