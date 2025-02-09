#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);

        if (n < 2) {  // 0 and 1 are not prime
            printf("0\n");
            continue;
        }

        bool prm = true;

        for (int j = 2; j * j <= n; j++) { // Efficient prime check
            if (n % j == 0) {
                prm = false;
                break; // No need to check further
            }
        }

        if (prm) {
            printf("1\n"); // Print 1 if prime
        } else {
            printf("0\n"); // Print 0 if not prime
        }
    }

    return 0;
}
