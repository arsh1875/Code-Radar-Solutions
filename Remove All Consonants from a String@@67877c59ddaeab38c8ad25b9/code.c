// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For isalpha()

void removeConsonants(char *str) {
    int i, j = 0;
    char result[100];  // Temporary array to store vowels and spaces

    for (i = 0; str[i] != '\0'; i++) {
        if (strchr("aeiouAEIOU", str[i]) || !isalpha(str[i])) {  
            result[j++] = str[i];  // Copy vowels and non-alphabetic characters
        }
    }
    result[j] = '\0';  // Null-terminate the new string

    strcpy(str, result);  // Copy the modified string back
}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);  // Read input string

    removeConsonants(str);  // Remove consonants

    printf("%s", str);

    return 0;
}
