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

