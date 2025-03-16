// Your code here...

// Function to find the K-th missing positive number
int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, current = 1, index = 0;

    while (missingCount < k) {
        // If current number is in the array, skip it
        if (index < n && arr[index] == current) {
            index++;
        } else { // Otherwise, count it as a missing number
            missingCount++;
        }
        
        // If we reached the K-th missing number, return it
        if (missingCount == k) {
            return current;
        }

        current++; // Move to next number
    }
    
    return -1; // Should never reach here
}