// Your code here...
#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the smallest missing positive integer
int findSmallestMissingPositive(int arr[], int size) {
    // Step 1: Place numbers in their correct position using cyclic sort
    for (int i = 0; i < size; i++) {
        while (arr[i] > 0 && arr[i] <= size && arr[i] != arr[arr[i] - 1]) {
            swap(&arr[i], &arr[arr[i] - 1]);
        }
    }

    // Step 2: Find the missing smallest positive integer
    for (int i = 0; i < size; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }

    // If all are present, return size + 1
    return size + 1;
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

    // Find and print the smallest missing positive number
    int result = findSmallestMissingPositive(arr, N);
    printf("%d\n", result);

    return 0;
}
