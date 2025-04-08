#include <stdio.h>
#include <string.h>

#define MAX 256  // For all ASCII characters

char mostFrequentChar(const char *str) {
    int freq[MAX] = {0};
    int maxFreq = 0;
    char mostFreqChar = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        freq[ch]++;

        if (freq[ch] > maxFreq) {
            maxFreq = freq[ch];
            mostFreqChar = ch;
        }
    }

    return mostFreqChar;
}
int main() {
    char str[1000];

    printf("Enter a string: ");
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
