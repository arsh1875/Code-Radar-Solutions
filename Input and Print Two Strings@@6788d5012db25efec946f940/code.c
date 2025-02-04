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
    
    // Flag to track the first word
    int first = 1;

    // Print words with " and " between them
    while (token != NULL) {
        if (!first) {
            printf(" and ");
        }
        printf("%s", token);
        first = 0; // First word has been printed
        token = strtok(NULL, " ");
    }

    printf("\n"); // New line after output

    return 0;
}
