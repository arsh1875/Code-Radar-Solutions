// Your code here...
#include <stdio.h>

int main() {
    int N, K, count = 0;

    // Read N (size of array) and K (target value)
    scanf("%d %d", &N, &K);

    int arr[N];

    // Read N elements into the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == K) {
            count++; // Count occurrences of K
        }
    }

    // Print the count of elements equal to K
    printf("%d\n", count);

    return 0;
}
