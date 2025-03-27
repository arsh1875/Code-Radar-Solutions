#include <stdio.h>

// Function to left rotate the array by K positions
void leftRotate(int arr[], int size, int k) {
    k = k % size; // Ensure k is within bounds
    int temp[k];

    // Store first K elements in temp
    for (int i = 0; i < k; i++)
        temp[i] = arr[i];

    // Shift remaining elements left
    for (int i = k; i < size; i++)
        arr[i - k] = arr[i];

    // Move temp elements to end
    for (int i = 0; i < k; i++)
        arr[size - k + i] = temp[i];
}

// Function to right rotate the array by K positions
void rightRotate(int arr[], int size, int k) {
    k = k % size; // Ensure k is within bounds
    int temp[k];

    // Store last K elements in temp
    for (int i = 0; i < k; i++)
        temp[i] = arr[size - k + i];

    // Shift remaining elements right
    for (int i = size - k - 1; i >= 0; i--)
        arr[i + k] = arr[i];

    // Move temp elements to beginning
    for (int i = 0; i < k; i++)
        arr[i] = temp[i];
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

    // Choose rotation type
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        leftRotate(arr, N, K);
    } else if (choice == 2) {
        rightRotate(arr, N, K);
    } 

    // Print rotated array
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");

    return 0;
}
