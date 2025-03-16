#include<string.h>
// Function to compress a string
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

        // Append count only if it's more than 1
        if (count > 1) {
            int num_len = sprintf(&compressed[index], "%d", count);
            index += num_len;
        }
    }

    compressed[index] = '\0'; // Null terminate the compressed string
}
