#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void findUniquePairsWithSum(int arr[], int n, int target) {
    qsort(arr, n, sizeof(int), compare);  // Sort array

    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("%d %d\n", arr[left], arr[right]);

            // Skip duplicates
            int l_val = arr[left];
            int r_val = arr[right];
            while (left < right && arr[left] == l_val) left++;
            while (left < right && arr[right] == r_val) right--;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
}

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[1000];  // upper bound
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    findUniquePairsWithSum(arr, n, target);

    return 0;
}
