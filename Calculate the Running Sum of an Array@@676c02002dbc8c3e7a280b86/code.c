// Your code here...
#include <stdio.h>


int main() {
    int n;

    // Taking array size as input
    scanf("%d", &n);

    int arr[n];

    // Taking array elements as input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate and print running sum
    for(int i=0;i<n;i++){
        int sum=0;
        sum+=arr[i];
        printf("%d ",sum);
    }
    printf("\n");
    return 0;
}


void runningSum(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];  // Add current element to sum
        printf("%d ", sum);
    }
    printf("\n");
}
