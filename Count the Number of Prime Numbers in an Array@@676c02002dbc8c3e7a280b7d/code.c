#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0;
    for (int j = 2; j * j <= num; j++) {
        if (num % j == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[20];
    int n, count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            count++;
        }
    }

    printf("%d\n", count);
    
    return 0;
}
