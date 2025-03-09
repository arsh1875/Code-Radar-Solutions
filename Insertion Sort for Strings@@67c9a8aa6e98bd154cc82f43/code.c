#include <stdio.h>
#include <string.h>

// Function to perform Insertion Sort on an array of strings
void insertionSort(char arr[][100], int n) {
    char key[100]; // Temporary storage for the string being inserted
    int i, j;

    for (i = 1; i < n; i++) {
        strcpy(key, arr[i]); // Copy the current string to key
        j = i - 1;

        // Move elements that are greater than key to one position ahead
        while (j >= 0 && strcmp(arr[j], key) > 0) {
            strcpy(arr[j + 1], arr[j]); // Shift string forward
            j--;
        }
        
        strcpy(arr[j + 1], key); // Insert key in the correct position
    }
}

// Function to print the array of strings
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}
