// Your code here...
#include <stdio.h>
#include <limits.h> // For INT_MIN

// Function to find the second largest element
int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Not enough elements for second largest.\n");
        return -1;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    // Traverse the array
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
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

    // Find second largest element
    int result = findSecondLargest(arr, N);

    // Print result
    if (result != -1) {
        printf("%d\n", result);
    } else {
        printf("No second largest element found.\n");
    }

    return 0;
}
