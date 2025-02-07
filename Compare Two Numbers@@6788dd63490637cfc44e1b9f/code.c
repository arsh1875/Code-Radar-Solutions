#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int d,e;
    scanf("%d",&d);

    if(d==e){
        printf("Equal");
    }
    else if(d>e){
        printf("First");
    }
    else if(d<e){
        printf("Second");
    }
    return 0;
}