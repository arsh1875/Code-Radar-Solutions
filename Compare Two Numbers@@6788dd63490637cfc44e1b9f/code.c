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
        printf("%d",d);
    }
    else if(d<e){
        printf("%d",e);
    }
    return 0;
}