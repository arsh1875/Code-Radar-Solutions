// Your code here...
#include <stdio.h>

void replaceLetter(char *str, char Char) {
    int count=0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == Char) {
            count+=1;;  // Replace character
        }
    }
    return count;
}

int main() {
    char str[100], Char;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string

    scanf(" %c", &Char);  // Read character to replace

    replaceLetter(str,Char);
    return 0;
}
