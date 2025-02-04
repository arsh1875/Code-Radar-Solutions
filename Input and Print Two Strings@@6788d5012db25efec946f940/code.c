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
    
    // Print each word separately
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
