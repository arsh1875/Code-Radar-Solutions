// Your code here...
#include <stdio.h>
#include <string.h>

void replaceLetter(char *str, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (strchr("aieouAIEOU",str[i])) {
            str[i] = newChar;  // Replace character
        }
    }
}

int main() {
    char str[100], newChar;

    fgets(str, sizeof(str), stdin);  // Read input string

    scanf(" %c", &newChar);  // Read new character

    replaceLetter(str, newChar);

    printf("%s", str);

    return 0;
}
