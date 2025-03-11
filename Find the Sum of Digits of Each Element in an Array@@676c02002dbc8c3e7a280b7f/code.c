// Your code here...
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    // Input the size of the array
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size n

    // Input elements into the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("%d\n", sum);
    
    return 0;
}
