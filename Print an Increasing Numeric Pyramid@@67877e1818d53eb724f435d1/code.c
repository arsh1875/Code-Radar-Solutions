// Your code here...#include <stdio.h>

void printIncreasingNumericPyramid(int n) {
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

    printIncreasingNumericPyramid(rows);

    return 0;
}
