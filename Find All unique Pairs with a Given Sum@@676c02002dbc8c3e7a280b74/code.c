#include <stdio.h>
#include <stdbool.h>

void findUniquePairs(int arr[], int n, int target) {
    bool used[1000] = {false};  // Marks if an element was used in a pair

    for (int i = 0; i < n; i++) {
        if (used[i]) continue;

        for (int j = i + 1; j < n; j++) {
            if (used[j]) continue;

            if (arr[i] + arr[j] == target) {
                int a = arr[i], b = arr[j];

                // Print smaller value first
                if (a > b) {
                    int temp = a;
                    a = b;
                    b = temp;
                }

                printf("%d %d\n", a, b);

                // Mark both elements as used
                used[i] = true;
                used[j] = true;

                break; // move to next i
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

    findUniquePairs(arr, n, target);

    return 0;
}
