#include <stdio.h>

void replaceLetter(char *str, char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;  // Replace character
        }
    }
}

int main() {
    char str[100], oldChar, newChar;

    fgets(str, sizeof(str), stdin);  // Read input string

    scanf(" %c", &oldChar);  // Read character to replace

    scanf(" %c", &newChar);  // Read new character

    replaceLetter(str, oldChar, newChar);

    printf("%s\n", str);

    return 0;
}
