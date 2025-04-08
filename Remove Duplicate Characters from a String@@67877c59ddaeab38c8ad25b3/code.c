// Your code here...
#include <stdio.h>
#include <string.h>

#define MAX 256  // For all ASCII characters

void removeDuplicates(char *str) {
    int seen[MAX] = {0};  // Track seen characters
    int len = strlen(str);
    int index = 0;

    for (int i = 0; i < len; i++) {
        unsigned char ch = str[i];
        if (!seen[ch]) {
            str[index++] = ch;
            seen[ch] = 1;
        }
    }
    str[index] = '\0';  // Null-terminate the result
}
int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    removeDuplicates(str);
    printf("%s\n", str);

    return 0;
}
