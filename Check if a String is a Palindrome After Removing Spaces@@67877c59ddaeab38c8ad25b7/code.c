// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    char cleaned[1000];
    int len = 0;

    // Remove spaces and copy to cleaned string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            cleaned[len++] = str[i];
        }
    }
    cleaned[len] = '\0'; // null-terminate the cleaned string

    // Check if cleaned string is a palindrome
    for (int i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - i - 1])
            return 0; // not a palindrome
    }

    return 1; // it's a palindrome
}

int main() {
    char input[1000];

    fgets(input, sizeof(input), stdin);

    // Remove trailing newline
    input[strcspn(input, "\n")] = 0;

    if (isPalindrome(input))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
