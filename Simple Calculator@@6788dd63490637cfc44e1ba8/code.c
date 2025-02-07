#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1, n2;
    char s;


    // Taking input for two numbers
    scanf("%d %d", &n1, &n2);

    // Taking operator input (with space before %c to remove newline issue)
    scanf(" %c", &s);

    // Performing the operation based on input
    if (s == '+') {
        printf("%d\n", n1 + n2);
    } else if (s == '-') {
        printf("%d\n", n1 - n2);
    } else if (s == '*') {
        printf("%d\n", n1 * n2);
    } else if (s == '/') {
        if (n2 != 0) {
            printf("%d\n", n1 / n2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
