#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n[100];
    scanf("%s",&n);
    printf("You entered: %s\n",n);

    return 0;
}