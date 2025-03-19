// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to sort a string (using built-in qsort)
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

// Function to check if two strings are anagrams
bool areAnagrams(char str1[], char str2[]) {
    // If lengths are different, they can't be anagrams
    if (strlen(str1) != strlen(str2))
        return false;

    // Sort both strings
    sort(str1, strlen(str1), sizeof(char), compare);
    sort(str2, strlen(str2), sizeof(char), compare);

    // Compare sorted strings
    return (strcmp(str1, str2) == 0);
}

int main() {
    char str1[100], str2[100];

    // Read input strings
    scanf("%s", str1);

    scanf("%s", str2);

    // Check anagram and print result
    if (areAnagrams(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
