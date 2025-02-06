#include <stdio.h>
#include <ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        printf("Lowercase");
    }
    if(c>='A' && c<='Z'){
        printf("Uppercase");
    }
    return 0;
}