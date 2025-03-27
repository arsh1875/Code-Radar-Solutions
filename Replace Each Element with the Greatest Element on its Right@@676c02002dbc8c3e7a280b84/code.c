// Your code here...
#include <stdio.h>

void replaceWithGreatestOnRight(int arr[], int size) {
    int maxRight = -1; // Initialize rightmost element as -1

    for (int i = size - 1; i >= 0; i--) {
        int temp = arr[i];  // Store current element
        arr[i] = maxRight;   // Replace with maxRight
        if (temp > maxRight) {
            maxRight = temp; // Update maxRight
        }
    }

    // Print the modified array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

    // Replace elements with the greatest element on their right
    replaceWithGreatestOnRight(arr, N);

    return 0;
}
