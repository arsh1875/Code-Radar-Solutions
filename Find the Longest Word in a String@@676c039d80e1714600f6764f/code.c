// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int maxLen = 0, currLen = 0;
    int startIndex = 0, maxStart = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            if (currLen == 0) startIndex = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = startIndex;
            }
            currLen = 0;
        }
    }

    // For the last word (if the string doesn't end with a space)
    if (currLen > maxLen) {
        maxLen = currLen;
        maxStart = startIndex;
    }

    for (int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
