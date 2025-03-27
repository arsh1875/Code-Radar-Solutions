// Your code here...
#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break; // Avoid printing the same duplicate multiple times
            }
        }
    }
}

int main() {
    int n, i;

    // Taking array size as input
    scanf("%d", &n);

    int arr[n];

    // Taking array elements as input
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding and printing duplicates
    findDuplicates(arr, n);

    return 0;
}
