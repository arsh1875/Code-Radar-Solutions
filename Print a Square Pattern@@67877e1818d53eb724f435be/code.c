#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    while(i<=n){
        int j;
        while(j<=n){
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}