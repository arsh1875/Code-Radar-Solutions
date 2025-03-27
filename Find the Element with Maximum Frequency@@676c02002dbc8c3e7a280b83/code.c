// Your code here...
#include <stdio.h>

void findMaxFrequencyElement(int arr[], int size) {
    int values[size], counts[size], uniqueCount = 0;

    // Count frequency of each element
    for (int i = 0; i < size; i++) {
        int found = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (values[j] == arr[i]) {
                counts[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            values[uniqueCount] = arr[i];
            counts[uniqueCount] = 1;
            uniqueCount++;
        }
    }

    // Find the most frequent element
    int maxCount = 0, mostFrequent;
    for (int i = 0; i < uniqueCount; i++) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
            mostFrequent = values[i];
        }
    }

    printf("%d\n", mostFrequent);
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

    // Find and print the most frequent element
    findMaxFrequencyElement(arr, N);

    return 0;
}
