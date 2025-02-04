#include <stdio.h>

int main() {
    char str[100];

    // Prompt user for input
    
    // Read the entire line (including spaces)
    fgets(str, sizeof(str), stdin);

    // Print the string
    printf("You entered: %s", str);

    return 0;
}
