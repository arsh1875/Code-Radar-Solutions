#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,d;
    scanf("%d",&n);
    scanf("%d",&d);

    if(n%d==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}