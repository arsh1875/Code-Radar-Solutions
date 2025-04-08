// Your code here...
#include <stdio.h>
#include <string.h>

#define MAX 256  // ASCII size

char firstNonRepeatedChar(const char *str) {
    int freq[MAX] = {0};

    // First pass: count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Second pass: find first character with freq 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';  // If no non-repeated character found
}
int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char result = firstNonRepeatedChar(str);

    if (result != '\0')
        printf("%c\n", result);
    else
        printf("-\n");

    return 0;
}
