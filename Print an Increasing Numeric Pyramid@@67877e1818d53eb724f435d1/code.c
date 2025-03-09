#include <stdio.h>

void printNumericPyramid(int n) {
    int i, j, space;

    for (i = 1; i <= n; i++) {
        // Print spaces for centering
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line after each row
    }
}

int main() {
    int rows;
    
    scanf("%d", &rows);

    printNumericPyramid(rows);

    return 0;
}
