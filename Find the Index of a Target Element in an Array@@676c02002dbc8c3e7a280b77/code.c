// Your code here...
#include <stdio.h>

// Function to find the index of the target element
int findIndex(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;  // Return index if found
    }
    return -1;  // Return -1 if not found
}

int main() {
    int N, target;

    // Taking array size as input
    scanf("%d", &N);

    int arr[N];

    // Taking array elements as input
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking target element as input
    scanf("%d", &target);

    // Find index of target element
    int index = findIndex(arr, N, target);

    // Print result
    if (index != -1) {
        printf("%d\n", index);
    } else {
        printf("-1\n");
    }

    return 0;
}
