#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int d;
    scanf("%d",&d);

    if(2<d<100){
        printf("In Range");
    }
    else if(d==1){
        printf("In Range");
    }
    else if(d==101){
        printf("Out of Range");
    }
    else if(d==0){
        printf("Out of Range");
    }

    else {
        printf("Out of Range");
    }
    return 0;
}