#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Prompt user for input
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    // Split the string using space as a delimiter
    char *token = strtok(str, " ");
    
    // Print "You entered: "
    printf("You entered: ");

    // Flag to handle "and" between words
    int firstWord = 1;

    while (token != NULL) {
        if (!firstWord) {
            printf(" and ");
        }
        printf("%s", token);
        firstWord = 0;

        token = strtok(NULL, " ");
    }

    printf("\n"); // New line after output

    return 0;
}
