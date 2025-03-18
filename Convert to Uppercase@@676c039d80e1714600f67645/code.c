// Your code here...
#include <stdio.h>
#include <ctype.h>  // For toupper()

void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);  // Convert each character to uppercase
    }
}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);  // Read input string

    toUpperCase(str);  // Convert string to uppercase

    printf("%s", str);

    return 0;
}
