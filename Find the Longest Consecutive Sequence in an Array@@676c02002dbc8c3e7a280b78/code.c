// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Helper function for quick sorting
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Function to find the longest consecutive sequence
int longestConsecutive(int arr[], int size) {
    if (size == 0) return 0;

    // Step 1: Sort the array
    qsort(arr, size, sizeof(int), compare);

    int maxLen = 1, currentLen = 1;

    // Step 2: Traverse the sorted array
    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1] + 1) { // Consecutive number
            currentLen++;
        } else if (arr[i] != arr[i - 1]) { // New sequence
            maxLen = (currentLen > maxLen) ? currentLen : maxLen;
            currentLen = 1;
        }
    }

    // Step 3: Return the maximum sequence length
    return (currentLen > maxLen) ? currentLen : maxLen;
}

int main() {
    int N;

    // Taking array size as input
    scanf("%d", &N);

    int arr[N];

    // Taking array elements as input
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the longest consecutive sequence length
    int result = longestConsecutive(arr, N);
    printf("%d\n", result);

    return 0;
}
