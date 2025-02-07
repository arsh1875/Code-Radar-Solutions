#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int d;
    scanf("%d",&d);

    if(d%3==0 && d%5==0){
        printf("Divisible by Both");
    }
    else if(d%3==0){
        printf("Divisible by 3");
    }
    else if(d%5==0){
        printf("Divisible by 5");
    }
    else {
        printf("Not Divisible");
    }
    return 0;
}