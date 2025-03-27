// Your code here...
#include <stdio.h>

// Function to check if an array is monotonic
int isMonotonic(int arr[], int size) {
    int isIncreasing = 1, isDecreasing = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i - 1]) {
            isDecreasing = 0; // Not decreasing
        }
        if (arr[i] < arr[i - 1]) {
            isIncreasing = 0; // Not increasing
        }
    }

    return isIncreasing || isDecreasing; // True if either condition holds
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

    // Checking if the array is monotonic
    if (isMonotonic(arr, N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
