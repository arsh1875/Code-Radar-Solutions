#include <stdio.h>
#include <string.h>

// Function to check if the string is binary (contains only '0' and '1')
int isBinaryString(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            return 0; // Not a binary string
        }
    }
    return 1; // It is a binary string
}

int main() {
    char str[100];

    // Input the string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    // Check if the string contains only '0' and '1'
    if (isBinaryString(str)) {
        printf("Yes\n"); // The string is binary
    } else {
        printf("No\n"); // The string contains other characters
    }

    return 0;
}
