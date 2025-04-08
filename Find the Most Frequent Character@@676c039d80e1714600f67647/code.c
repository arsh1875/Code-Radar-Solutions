#include <stdio.h>
#include <string.h>

#define MAX 256  // ASCII characters

char mostFrequentChar(const char *str) {
    int freq[MAX] = {0};
    int len = strlen(str);
    char result = '\0';
    int maxFreq = 0;

    // Count frequencies
    for (int i = 0; i < len; i++) {
        unsigned char ch = str[i];
        freq[ch]++;
    }

    // Traverse again from end to start to find last most frequent
    for (int i = len - 1; i >= 0; i--) {
        unsigned char ch = str[i];
        if (freq[ch] >= maxFreq) {
            maxFreq = freq[ch];
            result = ch;
        }
    }

    return result;
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char result = mostFrequentChar(str);

    if (result != '\0')
        printf("%c\n", result);
    else
        printf("-\n");

    return 0;
}
