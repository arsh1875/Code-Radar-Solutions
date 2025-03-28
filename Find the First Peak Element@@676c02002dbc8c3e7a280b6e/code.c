// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Fixed: Added '&' in scanf
    }

    // Initialize min and max values to first element
    int max = arr[0];

    // Finding min and max values
    for (int i = 1; i < n; i++) { // Start from 1, as arr[0] is already taken
        while(arr[i]>arr[i+1]){
            if (arr[i] > max) {
               max = arr[i];
            }
        }
    }

    // Print the min and max elements
    printf("%d\n", max);

    return 0;
}
