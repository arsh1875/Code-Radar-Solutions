#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1,n2;
    scanf("%d %d",n1,n2);
    if(n1&&n2<0){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}