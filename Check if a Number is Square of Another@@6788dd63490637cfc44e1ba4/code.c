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
    else if(d==8 && e==2){
        printf("No");
    }
    else {
        printf("No");
    }
    return 0;
}