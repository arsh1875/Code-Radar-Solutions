#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int d,e;
    scanf("%d",&d);
    scanf("%d",&e);

    if(d%e==0){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}