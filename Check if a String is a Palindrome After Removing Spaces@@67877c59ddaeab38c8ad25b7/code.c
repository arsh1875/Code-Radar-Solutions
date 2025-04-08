#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    char cleaned[1000];
    int len = 0;

    // Remove spaces and convert to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            cleaned[len++] = tolower(str[i]);
        }
    }
    cleaned[len] = '\0';

    // Check for palindrome
    for (int i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - i - 1])
            return 0;
    }
    return 1;
}

int main() {
    char input[1000];

    fgets(input, sizeof(input), stdin);

    // Remove trailing newline if present
    input[strcspn(input, "\n")] = 0;

    if (isPalindrome(input))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
