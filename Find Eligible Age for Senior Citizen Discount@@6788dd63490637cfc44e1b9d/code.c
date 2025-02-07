#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int d;
    scanf("%d",&d);

    if(d>=60){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}