// Your code here...#include <stdio.h>

int printDiamond(int n) {
    int i, j, space;

    // Upper half of the diamond
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%d",j);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    scanf("%d", &rows);

    printDiamond(rows);

    return 0;
}
