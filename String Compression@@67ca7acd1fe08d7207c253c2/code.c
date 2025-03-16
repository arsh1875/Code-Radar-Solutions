
#include <string.h>

// Function to compress a string based on the given conditions
void compressString(char str[], char compressed[]) {
    int len = strlen(str);
    int index = 0; // To track position in compressed string

    for (int i = 0; i < len; i++) {
        int count = 1;

        // Count occurrences of the current character
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Append character
        compressed[index++] = str[i];

        // If count is 2 or more, append count + 1
        if (count >= 2) {
            int num_len = sprintf(&compressed[index], "%d", count + 1);
            index += num_len;
        }
    }

    compressed[index] = '\0'; // Null terminate the compressed string
}