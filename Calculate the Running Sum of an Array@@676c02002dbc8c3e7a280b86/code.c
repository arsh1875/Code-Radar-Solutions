// Your code here...
#include <stdio.h>

void runningSum(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];  // Add current element to sum
        printf("%d ", sum);
    }
    printf("\n");
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

    // Calculate and print running sum
    runningSum(arr, N);

    return 0;
}
