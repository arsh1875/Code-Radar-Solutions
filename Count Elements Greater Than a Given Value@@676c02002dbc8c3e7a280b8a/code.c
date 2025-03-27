// Your code here...
#include <stdio.h>

int main() {
    int N, K, count = 0;

    // Taking array size and K as input
    scanf("%d %d", &N, &K);

    int arr[N];

    // Taking array elements as input
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        // If element is greater than K, increase count
        if (arr[i] > K) {
            count++;
        }
    }

    // Print the count of elements greater than K
    printf("%d\n", count);

    return 0;
}
