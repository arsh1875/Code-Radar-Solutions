// Your code here...
#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0, end = length - 1;
    char temp;
    
    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        // Move pointers
        start++;
        end--;
    }
}

int main() {
    char str[100];

    // Input string
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present

    reverseString(str);
    
    printf("%s\n", str);
    
    return 0;
}
