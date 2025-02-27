#include <stdio.h>

void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

void bubbleSort(int a[], int n) {
    for (int b = 0; b < n; b++) {  // Outer loop runs n-1 times
        for (int k = 0; k < n - 1; k++) {  // Inner loop should use a different variable
            if (a[k] > a[k + 1]) {
                int t = a[k];
                a[k] = a[k + 1];
                a[k + 1] = t;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Removed '&' before arr[i]
    }
    printf("\n");  // Newline for better output formatting
}
