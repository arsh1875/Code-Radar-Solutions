// Your code here...
#include <stdio.h>
#include <limits.h> // For INT_MAX

void findSecondSmallest(int arr[], int size) {
    if (size < 2) {
        printf("Array must have at least two elements.\n");
        return;
    }

    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest; // Update second smallest
            smallest = arr[i];         // Update smallest
        } else if (arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];   // Update second smallest
        }
    }

    if (secondSmallest == INT_MAX) {
        printf("-1\n");
    } else {
        printf(" %d\n", secondSmallest);
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

    // Find and print second smallest element
    findSecondSmallest(arr, N);

    return 0;
}
