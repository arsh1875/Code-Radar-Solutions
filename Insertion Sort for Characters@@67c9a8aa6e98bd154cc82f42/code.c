// Your code here...
#include <stdio.h>

// Function to perform Selection Sort on character array
void selectionSort(char arr[], int n) {
    int i, j, minIndex;
    char temp;

    for (i = 0; i < n - 1; i++) {
        minIndex = i; // Assume the current index is the minimum

        // Find the smallest character in the remaining array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of unsorted part
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print the character array
void PrintArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}
