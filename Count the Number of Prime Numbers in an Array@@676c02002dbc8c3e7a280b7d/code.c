// Your code here...
#include <stdio.h>

int main() {
    int arr[20];  // Array of size 20
    int n;
    
    // Taking input for array size
    scanf("%d", &n);
    
    // Taking input for array elements
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Corrected: Added '&' before arr[i]
    }

    // Checking if the array is sorted
    int prm = 1;
    int count=0;
 // Flag to track if sorted
    for (int j =2 ;j*j<n-1; j++) {  // Avoid out-of-bounds access
        if (arr[i]%j==0) {
            prm = 0;  // If any element is greater than the next, it's not sorted
            break;  // No need to check further
        }
    }

    // Print the result once
    if (prm) {
        count+=1;
    } else {
        return false;
    }
    printf("%d",&count);
    return 0;
}
