// Your code here...
#include <stdio.h>

#define MAX 100000 // Assumption for range of numbers

void findFirstRepeating(int arr[], int size) {
    int hash[MAX]; // Hash array to store first occurrence index
    for (int i = 0; i < MAX; i++) {
        hash[i] = -1; // Initialize all values to -1
    }

    int minIndex = size; // Store the minimum index of a repeating element

    for (int i = 0; i < size; i++) {
        if (hash[arr[i]] != -1) { // If already exists, check min index
            if (hash[arr[i]] < minIndex) {
                minIndex = hash[arr[i]];
            }
        } else {
            hash[arr[i]] = i; // Store the first occurrence index
        }
    }

    if (minIndex == size) {
        printf("-1\n");
    } else {
        printf("%d\n", arr[minIndex]);
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

    // Find and print the first repeating element
    findFirstRepeating(arr, N);

    return 0;
}
