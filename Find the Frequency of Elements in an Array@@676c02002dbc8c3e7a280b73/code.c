#include <stdio.h>

void findFrequency(int arr[], int size) {
    int freq[size];
    
    // Initialize frequency array with -1
    for (int i = 0; i < size; i++) {
        freq[i] = -1;
    }

    // Count frequency of each element
    for (int i = 0; i < size; i++) {
        if (freq[i] != -1) {  
            continue;  // Skip already counted elements
        }

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  // Mark duplicate elements
            }
        }
        freq[i] = count;
    }

    // Display frequencies
    for (int i = 0; i < size; i++) {
        if (freq[i] != 0) {
            printf("   %d %d\n", arr[i], freq[i]);
        }
    }
}

int main() {
    int n;

    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, size);

    return 0;
}
