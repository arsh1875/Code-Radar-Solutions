// Your code here...\
#include <stdio.h>

// Function to reverse an array between two indices
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array
void rotateArray(int arr[], int size, int k, int direction) {
    if (size == 0 || k % size == 0) return;  // No rotation needed
    k = k % size; // Ensure k is within bounds

    if (direction == 1) {  // Right Rotation
        reverse(arr, 0, size - 1);
        reverse(arr, 0, k - 1);
        reverse(arr, k, size - 1);
    } else {  // Left Rotation
        reverse(arr, 0, k - 1);
        reverse(arr, k, size - 1);
        reverse(arr, 0, size - 1);
    }
}

int main() {
    int N, K, direction;

    // Taking array size as input
    scanf("%d", &N);

    int arr[N];

    // Taking array elements as input
    for (int i = 0; i < N; i++) {
        scanf("%d\n", &arr[i]);
    }

    // Taking rotation count and direction
    scanf("%d", &K);
    scanf("%d", &direction);

    // Rotate the array
    rotateArray(arr, N, K, direction);

    // Print rotated array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
