// Your code here...
#include <stdio.h>

int replaceLetter(char *str, char Char) {
    int count=0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == Char) {
            count+=1;;  // Replace character
        }
    }
}

int main() {
    char str[100], Char;

    fgets(str, sizeof(str), stdin);  // Read input string

    scanf(" %c", &Char);  // Read character to replace

    replaceLetter(str,Char);
    printf("%d",count);
    return 0;
}
