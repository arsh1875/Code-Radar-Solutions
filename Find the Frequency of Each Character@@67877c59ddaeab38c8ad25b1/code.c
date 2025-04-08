#include <stdio.h>
#include <string.h>

#define MAX 256  // ASCII character limit

void countCharFrequencyInOrder(char *str) {
    int freq[MAX] = {0};
    int visited[MAX] = {0};  // To track already printed characters

    // First, count frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Then print in order of first appearance
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (!visited[ch]) {
            printf("%c: %d\n", ch, freq[ch]);
            visited[ch] = 1;
        }
    }
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    countCharFrequencyInOrder(str);

    return 0;
}
