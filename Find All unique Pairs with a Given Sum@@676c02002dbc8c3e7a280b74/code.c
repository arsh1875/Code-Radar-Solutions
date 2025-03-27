// Your code here...
#include <stdio.h>

void findPairs(int arr[], int size, int target) {
    int i, j;
    
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n, target, i;

    // Taking array size as input
    scanf("%d", &n);

    int arr[n];

    // Taking array elements as input
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking target sum as input
    scanf("%d", &target);

    // Finding pairs
    findPairs(arr, n, target);

    return 0;
}
