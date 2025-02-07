#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int d;
    scanf("%d",&d);

    if(1<d<100){
        printf("In Range");
    }

    else {
        printf("Out of Range");
    }
    return 0;
}