#include <stdio.h>

int main() {
    char ch;

    // Input from user
    scanf("%c", &ch);

    // Check if vowel
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || 
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        printf("Vowel");
    }
    // Check if consonant (Alphabet but not a vowel)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Consonant");
    }
    // Check if digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // If not vowel, consonant, or digit, then special character
    else {
        printf("Special Character");
    }

    return 0;
}
