#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d\n",n);
    if(n%10==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}