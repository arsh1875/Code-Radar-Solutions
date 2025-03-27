// Your code here...
#include <stdio.h>

// Function to move all zeros to the end
void moveZerosToEnd(int arr[], int size) {
    int index = 0; // Tracks the position for non-zero elements

    // Move all non-zero elements to the front
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill remaining positions with zero
    while (index < size) {
        arr[index++] = 0;
    }
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

    // Move all zeros to the end
    moveZerosToEnd(arr, N);

    // Print modified array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
