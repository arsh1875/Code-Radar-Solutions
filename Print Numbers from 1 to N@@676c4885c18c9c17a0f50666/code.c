#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    while(n>1){
        int i;
        for(i=1;i<=n;i++){
            printf("%d ",i);
        }
    }
    return 0;
}