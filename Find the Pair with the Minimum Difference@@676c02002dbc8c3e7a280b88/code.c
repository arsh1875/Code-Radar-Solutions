// Your code here...
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

// Function to find the pair with the minimum difference
void findMinDifferencePair(int arr[], int size) {
    if (size < 2) {
        return -1;
    }

    // Sort the array first
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int minDiff = INT_MAX;
    int num1, num2;

    // Find the minimum difference between consecutive elements
    for (int i = 0; i < size - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
            num1 = arr[i];
            num2 = arr[i + 1];
        }
    }

    printf("%d %d\n", num1, num2, minDiff);
}

int main() {
    int n;

    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    findMinDifferencePair(arr, size);

    return 0;
}
