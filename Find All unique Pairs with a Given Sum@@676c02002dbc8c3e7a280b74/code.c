#include <stdio.h>

void findPairsWithSum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[1000];  // Safe upper bound
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    findPairsWithSum(arr, n, target);

    return 0;
}
