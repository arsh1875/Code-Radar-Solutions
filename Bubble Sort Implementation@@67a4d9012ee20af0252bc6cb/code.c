#include <stdio.h>

void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Outer loop runs n-1 times
        for (int j = 0; j < n - 1 - i; j++) {  // Inner loop should use a different variable
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
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
