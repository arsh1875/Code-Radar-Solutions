// Your code here...
#include <stdio.h>
#include <string.h>

#define MAX 256  // Total ASCII characters

void countCharFrequency(char *str) {
    int freq[MAX] = {0};

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Print character frequencies
    for (int i = 0; i < MAX; i++) {
        if (freq[i] > 0) {
            printf("'%c': %d\n", i, freq[i]);
        }
    }
}
int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    countCharFrequency(str);

    return 0;
}
