#include <stdio.h>
#include <string.h>

// Function to reverse a string (custom implementation of strrev)
void myStrrev(char str[]) {
    int i, len = strlen(str);
    char temp;
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to reverse words in a string
void reverseWords(char str[]) {
    // Step 1: Reverse the entire string
    myStrrev(str);

    int start = 0, end, len = strlen(str);

    // Step 2: Reverse each word in the reversed string
    for (end = 0; end <= len; end++) {
        // If we find a space or reach the end, reverse the word
        if (str[end] == ' ' || str[end] == '\0') {
            str[end] = '\0';  // Temporarily terminate the word
            myStrrev(str + start);  // Reverse the word
            str[end] = ' ';  // Restore space
            start = end + 1;  // Move to the next word
        }
    }
}

int main() {
    char str[100];

    // Input the string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    // Reverse words
    reverseWords(str);

    // Output the result
    printf("%s\n", str);

    return 0;
}
