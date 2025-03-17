// Your code here...
#include <stdio.h>
#include <ctype.h>

int countWords(const char *str) {
    int count = 0, inWord = 0;

    while (*str) {
        if (isspace(*str)) {
            inWord = 0; // Found a space, end of a word
        } else if (!inWord) {
            inWord = 1; // Found a new word
            count++;    // Increment word count
        }
        str++;
    }
    
    return count;
}

int main() {
    char str[];
    
    scanf("%s\n", str);
    printf("%d\n", countWords(str));

    return 0;
}