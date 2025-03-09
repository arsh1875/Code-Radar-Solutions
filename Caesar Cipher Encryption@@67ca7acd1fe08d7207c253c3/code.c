#include <stdio.h>
#include <ctype.h>

// Function to encrypt the message using Caesar Cipher
void caesarCipher(const char message[], int shift ,char encrypted[]) {
    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        // Encrypt uppercase letters
        if (isupper(ch)) {
            encrypted[i] = ((ch - 'A' + shift) % 26) + 'A';
        }
        // Encrypt lowercase letters
        else if (islower(ch)) {
            encrypted[i] = ((ch - 'a' + shift) % 26) + 'a';
        }
        // Copy non-alphabetic characters as they are
        else {
            encrypted[i] = ch;
        }
    }
    encrypted[strlen(message)] = '\0'; // Null terminate the encrypted string
}