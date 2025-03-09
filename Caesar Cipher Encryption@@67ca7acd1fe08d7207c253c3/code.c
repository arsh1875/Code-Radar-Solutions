// Your code here...#include <stdio.h>
#include <ctype.h>

// Function to encrypt the message using Caesar Cipher
void caesarCipher(char message[], int shift) {
    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        // Encrypt uppercase letters
        if (isupper(ch)) {
            message[i] = ((ch - 'A' + shift) % 26) + 'A';
        }
        // Encrypt lowercase letters
        else if (islower(ch)) {
            message[i] = ((ch - 'a' + shift) % 26) + 'a';
        }
        // Leave non-alphabetic characters unchanged
    }
}

