#include <stdio.h>
#include <stdlib.h>

void findPairs(int arr[], int size, int target) {
    int hash[10000] = {0}; // Hash table to store visited numbers

    
    for (int i = 0; i < size; i++) {
        int complement = target - arr[i]; // Find required number to make the sum
        if (complement >= 0 && hash[complement]) { // Check if complement exists
            printf("(%d, %d)\n", complement, arr[i]);
            hash[complement] = 0; // Mark it as used to avoid duplicates
        }
        hash[arr[i]] = 1; // Mark current number as visited
    }
}

int main() {
    int n, target;

    // Taking array size as input
    scanf("%d", &n);

    int arr[n];

    // Taking array elements as input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking target sum as input
    scanf("%d", &target);

    // Finding pairs
    findPairs(arr, n, target);

    return 0;
}
