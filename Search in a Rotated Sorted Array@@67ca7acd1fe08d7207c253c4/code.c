// Your code here...
int searchInRotatedArray(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If target is found, return the index
        if (arr[mid] == target)
            return mid;

        // Check if the left half is sorted
        if (arr[left] <= arr[mid]) {
            // Target lies in the sorted left half
            if (target >= arr[left] && target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        } 
        // Otherwise, the right half must be sorted
        else {
            // Target lies in the sorted right half
            if (target > arr[mid] && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }

    return -1; // Target not found
}