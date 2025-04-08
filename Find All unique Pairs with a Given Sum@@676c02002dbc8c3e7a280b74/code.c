#include <stdio.h>

void findPairsWithSum(int arr[], int n, int target) {
    int used[1000] = {0}; // To avoid printing duplicate pairs

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                // Mark both numbers to avoid reusing
                int a = arr[i];
                int b = arr[j];

                // Ensure a < b for uniqueness in output
                if (a > b) {
                    int temp = a;
                    a = b;
                    b = temp;
                }

                // Check if this pair has already been used
                if (!used[a * 1000 + b]) {
                    printf("%d %d\n", a, b);
                    used[a * 1000 + b] = 1;  // Mark as used
                }
            }
        }
    }
}

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    findPairsWithSum(arr, n, target);

    return 0;
}
