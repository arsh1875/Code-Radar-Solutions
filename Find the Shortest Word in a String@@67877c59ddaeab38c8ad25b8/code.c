// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int minLen = 1000, currLen = 0;
    int startIndex = 0, minStart = 0;

    for (int i = 0; ; i++) {
        if (!isspace(str[i]) && str[i] != '\0' && str[i] != '\n') {
            if (currLen == 0) startIndex = i;
            currLen++;
        } else {
            if (currLen > 0 && currLen < minLen) {
                minLen = currLen;
                minStart = startIndex;
            }
            currLen = 0;
        }

        if (str[i] == '\0' || str[i] == '\n') break;
    }

    for (int i = minStart; i < minStart + minLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
