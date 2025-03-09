// Your code here...#include <stdio.h>
#include <string.h>

// Function to perform Selection Sort on an array of strings
void selectionSort(char arr[][100], int n) {
    int i, j, minIndex;
    char temp[100];

    for (i = 0; i < n - 1; i++) {
        minIndex = i; // Assume the current index is the smallest

        // Find the smallest string in the remaining array
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIndex]) < 0) { // Compare strings
                minIndex = j;
            }
        }

        // Swap the found minimum string with the first unsorted string
        if (minIndex != i) {
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[minIndex]);
            strcpy(arr[minIndex], temp);
        }
    }
}

// Function to print the array of strings
void PrintArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    int n;
    
    // Read the number of strings
    scanf("%d", &n);
    char arr[n][100]; // Array of strings (each string max 100 characters)

    // Read strings
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]); // Read a string (no spaces)
    }

    // Call the selection sort function
    selectionSort(arr, n);

    // Call PrintArray function to display the sorted strings
    PrintArray(arr, n);

    return 0;
}
