// Your code here...
#include <stdio.h>

void findLeaders(int arr[], int n) {
    int maxFromRight = arr[n - 1]; // Last element is always a leader
    printf("%d ", maxFromRight);

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i]; // Update maxFromRight
            printf("%d ", maxFromRight);
        }
    }
    printf("\n");
}

int main() {
    int n;

    // Input array size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLeaders(arr, n);

    return 0;
}
