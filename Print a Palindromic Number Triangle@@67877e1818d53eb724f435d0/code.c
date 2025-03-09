// Your code here...#include <stdio.h>

int printPalindromicTriangle(int n) {
    int i, j, space;

    for (i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print decreasing numbers
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        // Print increasing numbers
        for (j = 2; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    
    scanf("%d", &rows);

    printPalindromicTriangle(rows);

    return 0;
}
