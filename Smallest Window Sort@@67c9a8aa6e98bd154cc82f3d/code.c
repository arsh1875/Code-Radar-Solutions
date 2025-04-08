// Your code here...
int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;

    // Find the first index where the array is out of order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    // Already sorted
    if (start == -1) return 0;

    // Find the last index where the array is out of order
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Find min and max in the subarray arr[start..end]
    int min = arr[start], max = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Expand the window to include any number greater than min to the left
    for (int i = 0; i < start; i++) {
        if (arr[i] > min) {
            start = i;
            break;
        }
    }

    // Expand the window to include any number less than max to the right
    for (int i = n - 1; i > end; i--) {
        if (arr[i] < max) {
            end = i;
            break;
        }
    }

    return end - start + 1;
}
