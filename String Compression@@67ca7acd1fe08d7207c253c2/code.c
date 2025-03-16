// Your code here...
#include <stdio.h>
#include <string.h>

// Function to compress a string
void compressString(char str[]) {
    int len = strlen(str);
    if (len == 0) {
        printf("Empty string.\n");
        return;
    }
    for (int i = 0; i < len; i++) {
        int count = 1;

        // Count occurrences of the current character
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Print character and its count
        printf("%c%d", str[i], count);
    }
    printf("\n");
}

