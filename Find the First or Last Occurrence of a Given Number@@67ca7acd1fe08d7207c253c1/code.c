// Your code here...

// Function to find first or last occurrence of an element
int findOccurrence(int arr[], int n, int target, char choice) {
    int index = -1;  // Initialize index to -1 (not found)

    if (choice == 'F' || choice == 'f') {  // First occurrence
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                return i;  // Return first occurrence index
            }
        }
    } 
    else if (choice == 'L' || choice == 'l') {  // Last occurrence
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == target) {
                return i;  // Return last occurrence index
            }
        }
    } 
    else {
        printf("Invalid choice! Enter 'F' or 'L'.\n");
    }

    return index; // If not found, return -1
}