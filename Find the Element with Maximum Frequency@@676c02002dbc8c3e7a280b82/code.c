// Your code here...
#include <stdio.h>

#define MAX 100000 // Assumed max value in array

void findMaxFrequency(int arr[], int n) {
    int freq[MAX] = {0};  // Frequency array initialized to 0

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find the element with the maximum frequency
    int maxFreq = 0, mostFrequentElement;
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
            mostFrequentElement = arr[i];
        }
    }

    printf("%d\n", mostFrequentElement);
}

int main() {
    int n;

    // Input array size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMaxFrequency(arr, n);

    return 0;
}
