// Your code here...
#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n, maxEven = INT_MIN;

    // Taking array size as input
    scanf("%d", &n);

    int arr[n];

    // Taking array elements as input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check if the number is even and greater than current maxEven
        if (arr[i] % 2 == 0 && arr[i] > maxEven) {
            maxEven = arr[i];
        }
    }

    // Output the largest even number (if found)
    if (maxEven == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", maxEven);
    }

    return 0;
}
