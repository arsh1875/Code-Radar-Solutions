// Your code here...
#include <stdio.h>
#include <string.h>

void printLongestPalindrome(char *s) {
    int start = 0, maxLength = 1;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        // Odd-length palindrome
        int low = i, high = i;
        while (low >= 0 && high < len && s[low] == s[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            low--;
            high++;
        }

        // Even-length palindrome
        low = i;
        high = i + 1;
        while (low >= 0 && high < len && s[low] == s[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            low--;
            high++;
        }
    }

    for (int i = start; i < start + maxLength; i++)
        putchar(s[i]);
    printf("\n");
}

int main() {
    char str[];
    scanf("%s",str);
    printLongestPalindrome(str);  // Output can be "bab" or "aba"
    return 0;
}
