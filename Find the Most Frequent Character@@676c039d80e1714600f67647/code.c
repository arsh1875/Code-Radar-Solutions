#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256  // Total ASCII characters

// Function to find the most frequent character
char findMostFrequentChar(char str[]) {
    int count[ASCII_SIZE] = {0};  // Array to store frequency of each character
    int max = 0; 
    char result = '\0';

    // Count occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;  // Increment frequency
        if (count[(unsigned char)str[i]] > max) {
            max = count[(unsigned char)str[i]];
            result = str[i];  // Store most frequent character
        }
    }

    return result;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    char mostFrequent = findMostFrequentChar(str);
    
    if (mostFrequent)
        printf("%c\n", mostFrequent);
    else
        printf("No valid characters found.\n");

    return 0;
}
