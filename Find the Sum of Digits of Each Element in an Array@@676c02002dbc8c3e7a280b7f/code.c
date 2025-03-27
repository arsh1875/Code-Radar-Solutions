#include <stdio.h>

int findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element to sum
    }
    return sum;
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

    // Calculate and print sum
    printf("%d\n", findSum(arr, N));

    return 0;
}
