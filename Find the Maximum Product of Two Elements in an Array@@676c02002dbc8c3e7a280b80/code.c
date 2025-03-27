// Your code here...
#include <stdio.h>
#include <limits.h> // For INT_MIN and INT_MAX

void findMaxProduct(int arr[], int size) {
    if (size < 2) {
        printf("Array must have at least two elements.\n");
        return;
    }

    // Initialize variables
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    // Traverse the array
    for (int i = 0; i < size; i++) {
        // Update max1 and max2
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        // Update min1 and min2
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    // Calculate the max product
    int maxProduct = (max1 * max2 > min1 * min2) ? max1 * max2 : min1 * min2;
    
    printf("%d\n", maxProduct);
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

    // Find and print the maximum product of two elements
    findMaxProduct(arr, N);

    return 0;
}
