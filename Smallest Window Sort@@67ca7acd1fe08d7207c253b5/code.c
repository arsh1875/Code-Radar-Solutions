// Your code here...#include <stdio.h>
#include <limits.h>

int findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;

    // Find the left boundary where the array stops being sorted
    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }
    if (left == n - 1) {
        return 0; // Already sorted
    }

    // Find the right boundary where the array becomes sorted again
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    // Find min and max in the subarray arr[left:right]
    int subarrayMin = INT_MAX, subarrayMax = INT_MIN;
    for (int i = left; i <= right; i++) {
        if (arr[i] < subarrayMin) {
            subarrayMin = arr[i];
        }
        if (arr[i] > subarrayMax) {
            subarrayMax = arr[i];
        }
    }

    // Expand left boundary
    while (left > 0 && arr[left - 1] > subarrayMin) {
        left--;
    }

    // Expand right boundary
    while (right < n - 1 && arr[right + 1] < subarrayMax) {
        right++;
    }

    return right - left + 1;
}


