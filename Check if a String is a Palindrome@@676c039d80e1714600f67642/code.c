#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    scanf("%s",&n);
    if(n==n[::-1]){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}