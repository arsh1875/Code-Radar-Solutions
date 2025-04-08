// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int freq[256] = {0};

    fgets(str, sizeof(str), stdin);

    // Count frequency of each character (case-sensitive)
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find first character with frequency 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1 && str[i] != '\n') {
            printf("%c\n", str[i]);
            return 0;
        }
    }

    printf("No unique character found.\n");
    return 0;
}
