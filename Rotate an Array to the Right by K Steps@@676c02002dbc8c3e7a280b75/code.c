// Your code here...
#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to right rotate the array by K positions
void rightRotate(int arr[], int size, int k) {
    if (size == 0) return;   // Edge case: empty array
    k = k % size;  // Handle cases where K > N

    // Reverse the entire array
    reverse(arr, 0, size - 1);

    // Reverse the first K elements
    reverse(arr, 0, k - 1);

    // Reverse the remaining N-K elements
    reverse(arr, k, size - 1);
}

int main() {
    int N, K;

    // Taking array size as input
    scanf("%d", &N);

    int arr[N];

    // Taking array elements as input
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking rotation count
    scanf("%d", &K);

    // Rotate the array
    rightRotate(arr, N, K);

    // Print rotated array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
