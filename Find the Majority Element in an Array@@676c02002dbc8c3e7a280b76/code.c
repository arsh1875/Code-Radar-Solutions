// Your code here...
#include <stdio.h>

// Function to find the majority element using Boyer-Moore Voting Algorithm
int findMajorityElement(int arr[], int size) {
    int majorityCandidate = -1, count = 0;

    // Step 1: Find candidate
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            majorityCandidate = arr[i];
            count = 1;
        } else if (arr[i] == majorityCandidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == majorityCandidate)
            count++;
    }

    return (count > size / 2) ? majorityCandidate : -1;
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

    // Find majority element
    int result = findMajorityElement(arr, N);

    // Print result
    if (result != -1) {
        printf("%d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}
