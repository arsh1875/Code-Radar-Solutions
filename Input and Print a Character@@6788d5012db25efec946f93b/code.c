#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    scanf("%c",&n);
    printf("You entered: %c\n",n);

    return 0;
}